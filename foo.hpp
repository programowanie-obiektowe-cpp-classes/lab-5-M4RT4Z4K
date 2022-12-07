#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > animallover;
    std::list< Human >::iterator it = people.end();

    for (int i = people.size(); i >0 ; i--) {
        it--;
        it->birthday();
        if (it->isMonster()) {
            animallover.push_back('n');
        }
        else {
            animallover.push_back('y');
        }
    }
    return (animallover);
}

