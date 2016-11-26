#include "src/ir/nfa/nfa.h"

namespace re2c {

nfa_t::nfa_t(const std::vector<const RegExpRule*> &regexps)
	: max_size(0)
	, size(0)
	, states(NULL)
	, rules(*new std::valarray<Rule>(regexps.size()))
	, tags(NULL)
	, root(NULL)
{
	size_t ntags = 0;
	max_size = counters(regexps, ntags);

	states = new nfa_state_t[max_size];
	tags = new std::valarray<Tag>(ntags);
	regexps2nfa(regexps, *this);

	init_rules(regexps, rules, *tags);
}

nfa_t::~nfa_t()
{
	delete[] states;
}

} // namespace re2c
