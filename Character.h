#include <iostream>
using namespace std;

#ifndef PROJECT_1_CHARACTER_H
#define PROJECT_1_CHARACTER_H


class Character {
public:
    int time, intelligence, money, steps, health;
    string name;
    void view();
    void changeTime(int difference);
    void changeIntelligence(int difference);
    void changeMoney(int difference);
    void changeHealth(int difference);
    void changeSteps(int difference);
};


#endif //PROJECT_1_CHARACTER_H
