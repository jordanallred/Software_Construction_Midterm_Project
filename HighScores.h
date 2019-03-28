#include <iostream>
#include "Character.h"
using namespace std;

#ifndef PROJECT_1_HIGHSCORES_H
#define PROJECT_1_HIGHSCORES_H


class HighScores {
private:
    void swap(int array[], int size);
    void swap(string array[], int size);
    static const int maxScores = 10;
public:
    int count = 0, lowestScore = 0, scores[maxScores];
    string names[maxScores];
    void concurrentSort();
    void readScores(string scoresFile, string namesFile);
    void writeScores(string scoresFile, string namesFile);
    void newScore(int addScore, string addName);
    int calculateScore(Character player, string difficulty);
    void viewScores();
};


#endif //PROJECT_1_HIGHSCORES_H
