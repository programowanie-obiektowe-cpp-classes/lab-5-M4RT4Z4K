#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char >          animallover;
    std::vector< int >::iterator it = people.begin();
    for (it; it < people.end(); it++) {
        *it.birthday();
        if (*it.isMonster()) {
            animallover.push_front("n");
        }
        else {
            animallover.push_front("y");
        }
    }
    return (animallover);
}
