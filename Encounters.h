#include <iostream>
#include "Character.h"
using namespace std;

#ifndef PROJECT_1_ENCOUNTERS_H
#define PROJECT_1_ENCOUNTERS_H


class Encounters {
public:
    Character runEncounters(Character player);

    Character ironBowl(Character player);
    Character shelbyStairs(Character player);
    Character springBreak(Character player);
    Character plagiarism(Character player);

    Character eDay(Character player, int random);
    Character samGinn(Character player, int random);
    Character missExam(Character player, int random);
    Character leath(Character player, int random);
    Character tigerCard(Character player, int random);
    Character invention(Character player, int random);
    Character haleyCenter(Character player, int random);
    Character alabamaFan(Character player);
    Character testScore(Character player, int random);
    Character allAccess(Character player, int random);
    Character aubie(Character player, int random);
    Character final(Character player, int random);

    Character nothing(Character player);
    Character professor(Character player, int random);
    Character puzzle(Character player);
    Character papers(Character player, int random);
    Character change(Character player, int random);
    Character co_op(Character player, int random);
    Character internship(Character player, int random);
    Character study(Character player, int random);
    Character cwe(Character player, int random);
    Character allNighter(Character player, int random);
    Character summerClasses(Character player, int random);
    Character medClinic(Character player, int random);
    Character thirteen(Character player, int random);
    Character fourteen(Character player, int random);
    Character fifteen(Character player, int random);
    Character sixteen(Character player, int random);
    Character seventeen(Character player, int random);
    Character eighteen(Character player, int random);
};


#endif //PROJECT_1_ENCOUNTERS_H
