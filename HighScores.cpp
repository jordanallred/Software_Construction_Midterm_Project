#include "HighScores.h"
#include "Character.h"
#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

void HighScores::readScores(string scoresFile, string namesFile) {
    ifstream fscores, fnames;
    fscores.open(scoresFile);
    fnames.open(namesFile);
    for (count = 0; !fscores.eof() && !fnames.eof(); count++){
        fscores >> scores[count];
        string hold;
        getline(fnames, hold, ',');
        names[count] = hold;
    }
    concurrentSort();
}

void HighScores::writeScores(string scoresFile, string namesFile) {
    ofstream fscores, fnames;
    fscores.open(scoresFile);
    fnames.open(namesFile);
    for (int i = 0; i < count; i++) {
        fscores << scores[i] << " ";
        if (i < count - 1) {
            fnames << names[i] + ",";
        }
        else {
            fnames << names[i];
        }
    }
}

void HighScores::newScore(int addScore, string addName) {
    if (count < maxScores) {
        scores[count] = addScore;
        names[count] = move(addName);
        count++;
        concurrentSort();
    }
    if (count == maxScores && addScore > lowestScore) {
        scores[count - 1] = addScore;
        concurrentSort();
    }
}

void HighScores::concurrentSort() {
    bool sorted;
    do {
        sorted = true;
        for (int i = 1; i < count; i++) {
            if (scores[i] > scores[i - 1]) {
                swap(scores, i);
                swap(names, i);
                sorted = false;
            }
        }
    } while(!sorted);

    lowestScore = scores[count - 1];
}

void HighScores::swap(int array[], int size) {
    int hold = array[size - 1];
    array[size - 1] = array[size];
    array[size] = hold;
}

void HighScores::swap(string array[], int size) {
    string hold = array[size - 1];
    array[size - 1] = array[size];
    array[size] = hold;
}

void HighScores::viewScores() {
    cout << "\nTop " << maxScores << " High Scores\n";
    for( int i = 0; i < maxScores; i++) {
        if (count == maxScores || i < count){
            cout << i + 1 << ". " << names[i] << " - " << scores[i] << "\n";
        }
        else {
            cout << i + 1 << ". .....\n";
        }
    }
    cout << "Press any key to return to the main menu...";
    string nothing;
    cin >> nothing;
}

int HighScores::calculateScore(Character player, string difficulty) {
    int modifier = 1;
    if (difficulty == "default") {
        modifier = 3;
    }
    if (difficulty == "custom") {
        modifier = 2;
    }
    if (difficulty == "hard") {
        modifier = 4;
    }

    int calculatedScore = player.time * player.intelligence * player.money * player.health * modifier;
    return calculatedScore;
}