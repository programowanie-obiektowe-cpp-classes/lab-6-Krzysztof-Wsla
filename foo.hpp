#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>
#include <iostream>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size()); 

    std::for_each(people.begin(), people.end(), [](Human& p) { return p.birthday(); });

    std::transform(people.begin(), people.end(), retval.rbegin(), [](const Human& p) {if (p.isMonster()) return 'n'; else return 'y';});

    return retval;
}
