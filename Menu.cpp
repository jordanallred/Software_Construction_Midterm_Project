#include "Menu.h"
#include <iostream>
#include "Character.h"
#include "Control.h"
#include "HighScores.h"

using namespace std;

void Menu::startMenu() {
    cout << "What's your name? ";
    string playerName;
    getline(cin, playerName);
    int input;


    cout << "\nThank you for playing " << playerName << "!\n";
    cout << "Welcome to this edition of Ginn Games!\n";

    do {
        cout << "\nSelect one of the following options to continue:";
        cout << "\n1) Begin a new game\n";
        cout << "2) View the current high scores\n";
        cout << "3) Exit the menu\n\n";

        cout << "Please enter selection... ";
        cin >> input;
        switch (input) {
            case 1: {
                cout << "\tEntering game...\n";
                Control create;
                string word;
                do {
                    cout
                            << "\nPlease enter the difficulty at which you want to play the game (default/custom/hard) ";
                    cin >> word;
                } while (word != "default" && word != "custom" && word != "hard");
                Character player = create.createGame(word);
                create.difficulty = word;
                player.name = playerName;
                create.nextMove(player);
                break;
            }
            case 2: {
                HighScores highScores;
                highScores.readScores("C:\\Users\\Jordan Allred\\CLionProjects\\Project 1\\scoresFile.txt", "C:\\Users\\Jordan Allred\\CLionProjects\\Project 1\\namesFile.txt");
                highScores.viewScores();
                break;
            }
            case 3:
                exit(1);
            default:
                cout << "Please try again. The value entered was different than the expected value.";
        }
    } while (true);
}