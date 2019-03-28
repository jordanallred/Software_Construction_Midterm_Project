#include <iostream>
#include <fstream>
using namespace std;
#include "Character.h"
#include "Trivia.h"

int Trivia::getCount(string fileName) {
    int answerIn, size = 0;
    string questionIn, optionsIn, garbage;
    ifstream file;
    file.open(fileName);
    for (size; !file.eof(); size++) {
        if (size > 0) {
            getline(file, garbage);
        }
        getline(file, questionIn);
        for (int i = 0; i < optionNumber; i++) {
            getline(file, optionsIn);
        }
        file >> answerIn;
    }
    return size;
}

Character Trivia::readTrivia(string fileName, int size, Character player) {
    int answers[size];
    string questions[size];
    string options[size][4];
    string garbage, questionIn, optionsIn;
    ifstream file;
    file.open(fileName);
    if (file.fail()) {
        exit(1);
    }

    for (int i = 0; i < size; i++) {
        if (i > 0) {
            getline(file, garbage);
        }
        getline(file, questionIn);
        questions[i] = questionIn;
        for (int j = 0; j < optionNumber; j++) {
            getline(file, optionsIn);
            options[i][j] = optionsIn;
        }
        file >> answers[i];
    }
    player = askTrivia(player, answers, questions, options);
    return player;
}

Character Trivia::askTrivia(Character player, int answers[], string questions[], string options[][optionNumber]) {
    srand(time(0));
    int random = rand() % count;
    cout << "\t\t" << questions[random] << "\n";
    for (int i = 0; i < optionNumber; i++) {
        cout << "\t\t" << options[random][i] << "\n";
    }

    cout << "\n\t\tAnswer: ";
    int userAnswer;
    cin >> userAnswer;

    int change = rand() % 5;
    if (userAnswer == answers[random]) {
        cout << "\nCorrect!\n";
        player.changeIntelligence(change);
        return player;
    }
    else {
        cout << "\nIncorrect.\n";
        player.changeIntelligence(0 - change);
        return player;
    }
}
