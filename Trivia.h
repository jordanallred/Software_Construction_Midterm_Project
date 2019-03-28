#include <iostream>
#include "Character.h"
#include <vector>
using namespace std;

#ifndef PROJECT_1_TRIVIA_H
#define PROJECT_1_TRIVIA_H


class Trivia {
public:
    static int const optionNumber = 4;
    int count;
    Character readTrivia(string fileName, int size, Character player);
    Character askTrivia(Character player, int answers[], string questions[], string options[][optionNumber]);
    int getCount(string fileName);
};


#endif //PROJECT_1_TRIVIA_H
