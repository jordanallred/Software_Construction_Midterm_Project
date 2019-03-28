#include "Character.h"
#include <iostream>
using namespace std;

int steps = 20;

void Character::view() {
    cout << "Time: " << time;
    cout << "\nIntelligence: " << intelligence;
    cout << "\nMoney: " << money;
    cout << "\nHealth: " << health << "\n";
    cout << "Steps: " << steps << "\n";
}

void Character::changeTime(int difference) {
    time += difference;
}

void Character::changeIntelligence(int difference) {
    intelligence += difference;
}

void Character::changeMoney(int difference) {
    money += difference;
}

void Character::changeHealth(int difference) {
    health += difference;
}

void Character::changeSteps(int difference) {
    steps += difference;
}