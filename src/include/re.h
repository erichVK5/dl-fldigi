// ----------------------------------------------------------------------------
//      re.h
//
// Copyright (C) 2008
//              Stelios Bounanos, M0GLD
//
// This file is part of fldigi.
//
// fldigi is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3 of the License, or
// (at your option) any later version.
//
// fldigi is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
// ----------------------------------------------------------------------------

#include <config.h>
#if !defined(RE_H_) && HAVE_REGEX_H
#define RE_H_

#  include <regex.h>
#  include <string>
#  include <vector>

class re_t
{
public:
	re_t(const char* pattern_, int cflags = 0);
	re_t(const re_t& re);
	~re_t();
	re_t& operator=(const re_t& rhs);

	bool match(const char* str, int eflags = 0);
        const char* submatch(size_t n);
private:
	void compile(void);

	std::string pattern, str;
	int cflags, eflags;
	regex_t preg;
	std::vector<regmatch_t> suboff;
	std::vector<std::string> substr;
	bool error;
};


#endif // RE_H_/
