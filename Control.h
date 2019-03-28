#include <iostream>
#include "Character.h"
using namespace std;

#ifndef PROJECT_1_CONTROL_H
#define PROJECT_1_CONTROL_H



class Control {
public:
    string difficulty;
    Character createGame(string);
    void nextMove(Character player);
    Character readPapers(Character player);
    Character findChange(Character player);
    Character takeNap(Character player);
};


#endif //PROJECT_1_CONTROL_H
