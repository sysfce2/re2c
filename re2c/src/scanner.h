/* $Id$ */
#ifndef _scanner_h
#define	_scanner_h

#include <string>

#include "src/globals.h"
#include "src/input.h"
#include "src/output.h"
#include "src/re.h"
#include "src/token.h"

namespace re2c
{

struct ScannerState
{
	ScannerState();

	char	*tok, *ptr, *cur, *pos, *ctx;  // positioning
	char    *bot, *lim, *top, *eof;        // buffer
	uint32_t	tchar, tline, cline, iscfg, buf_size;
	bool    in_parse;
};

class Scanner: private ScannerState
{
private:
	Input & in;
	OutputFile & out;

private:
	char *fill(char*, uint32_t);
	Scanner(const Scanner&); //unimplemented
	Scanner& operator=(const Scanner&); //unimplemented
	void set_sourceline(char *& cursor);

public:
	Scanner(Input &, OutputFile &);
	~Scanner();

	enum ParseMode {
		Stop,
		Parse,
		Reuse,
		Rules
	};

	ParseMode echo();
	int scan();
	void reuse();
	
	size_t get_pos() const;
	void save_state(ScannerState&) const;
	void restore_state(const ScannerState&);

	uint32_t get_cline() const;
	const std::string & get_fname () const;
	void set_in_parse(bool new_in_parse);
	void fatal_at(uint32_t line, uint32_t ofs, const char *msg) const;
	void fatalf_at(uint32_t line, const char*, ...) const;
	void fatalf(const char*, ...) const;
	void fatal(const char*) const;
	void fatal(uint32_t, const char*) const;

	void config(const Str&, int);
	void config(const Str&, const Str&);

	void check_token_length(char *pos, uint32_t len) const;
	SubStr token() const;
	SubStr token(uint32_t start, uint32_t len) const;
	Str raw_token(std::string enclosure) const;

	uint32_t unescape(SubStr &s) const;
	std::string& unescape(SubStr& str_in, std::string& str_out) const;

	Range * mkRange(SubStr &s) const;
	Range * getRange(SubStr &s) const;
	RegExp * matchSymbol(uint32_t c) const;
	RegExp * matchSymbolRange(Range * r) const;
	RegExp * strToName(SubStr s) const;
	RegExp * strToRE(SubStr s) const;
	RegExp * strToCaseInsensitiveRE(SubStr s) const;
	RegExp * ranToRE(SubStr s) const;
	RegExp * invToRE(SubStr s) const;
	RegExp * mkDot() const;
	RegExp * mkDefault() const;
};

inline size_t Scanner::get_pos() const
{
	return cur - bot;
}

inline const std::string & Scanner::get_fname () const
{
	return in.file_name;
}

inline uint32_t Scanner::get_cline() const
{
	return cline;
}

inline void Scanner::save_state(ScannerState& state) const
{
	state = *this;
}

inline void Scanner::fatal(const char *msg) const
{
	fatal(0, msg);
}

inline SubStr Scanner::token() const
{
	check_token_length(tok, cur - tok);
	return SubStr(tok, cur - tok);
}

inline SubStr Scanner::token(uint32_t start, uint32_t len) const
{
	check_token_length(tok + start, len);
	return SubStr(tok + start, len);
}

} // end namespace re2c

#endif