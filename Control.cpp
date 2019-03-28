#include "Control.h"
#include "Character.h"
#include "Menu.h"
#include "HighScores.h"
#include "Encounters.h"
#include <iostream>
using namespace std;


Character Control::createGame(string difficulty) {
    int timeRemaining, money, intelligence, health;
    srand(time(0));
    do {
        if (difficulty == "custom") {
            do {
                cout << "Please enter the custom attributes of your character. Note: you have 50 attribute points\n";
                cout << "Time: ";
                cin >> timeRemaining;
                cout << "Money: ";
                cin >> money;
                cout << "Intelligence: ";
                cin >> intelligence;
                cout << "Health: ";
                cin >> health;
                if (timeRemaining + money + intelligence < 50) {
                    cout << "You know you have 50 points, right? I suggest you use them all.\n\n";
                }
                if (timeRemaining + money + intelligence > 50) {
                    cout << "I said you only have 50 points... don't get greedy now.\n\n";
                }
            } while(timeRemaining + money + intelligence + health!= 50);
        }

        else if (difficulty == "hard") {
            timeRemaining = rand() % 31 + 5;
            money = rand() % (31 - timeRemaining) + 5;
            health = rand() % (31 - timeRemaining - money) + 5;
            intelligence = 50 - timeRemaining - money - intelligence;
        }

        else if (difficulty == "default") {
            timeRemaining = 30;
            money = 5;
            intelligence = 5;
            health = 5;
        }

        else {
                cout << "Please try again. The value entered was different than the expected value.";
        }
    }
    while (difficulty != "default" && difficulty != "hard" && difficulty != "custom");

    Character create;
    create.time = timeRemaining;
    create.intelligence = intelligence;
    create.money = money;
    create.health = health;
    create.steps = 20;
    return create;
}

void Control::nextMove(Character player) {
    int input;
    do {
        do {
            cout << "\nYou have:\n";
            cout << "Time: " << player.time << "\n";
            cout << "Intelligence: " << player.intelligence << "\n";
            cout << "Money: " << player.money << "\n";
            cout << "Health: " << player.health << "\n\n";

            cout << "You are " << player.steps << " moves from your goal! Time remaining: " << player.time << ".\n\n";

            cout << "\t1) Take a step forward.\n";
            cout << "\t2) Read technical papers.\n";
            cout << "\t3) Search for loose change.\n";
            cout << "\t4) Take a nap.\n";
            cout << "\t5) View character.\n";
            cout << "\t6) Exit to Main Menu.\n\n";

            cout << "Please enter selection... ";

            cin >> input;
        } while (input != 1 && input != 2 && input != 3 && input != 4 && input != 5 && input != 6);
        switch (input) {
            case 1: {
                Encounters run;
                int choose = rand() % 100 + 1;
                int random = rand() % 3 + 1;
                player = run.runEncounters(player);
                break;
            }
            case 2: {
                player = readPapers(player);
                break;
            }
            case 3: {
                player = findChange(player);
                break;
            }
            case 4: {
                player = takeNap(player);
                break;
            }
            case 5: {
                player.view();
                break;
            }
            case 6: {
                Menu menu;
                menu.startMenu();
                break;
            }
        }
    } while (player.time > 0 && player.intelligence > 0 && player.money > 0 && player.steps > 0 && player.health > 0);

    HighScores highScores;
    highScores.readScores("C:\\Users\\Jordan Allred\\CLionProjects\\Project 1\\scoresFile.txt", "C:\\Users\\Jordan Allred\\CLionProjects\\Project 1\\namesFile.txt");

    if (player.time <= 0 || player.intelligence <= 0 || player.money <= 0 || player.health <= 0) {
        cout << "\nYour game has come to an end. Thank you for playing!\n\n";
    }
    else if (player.time > 0 && player.intelligence > 0 && player.money > 0 && player.steps == 0 && player.health > 0) {
        int totalScore = highScores.calculateScore(player, difficulty);
        highScores.newScore(totalScore, player.name);
        highScores.writeScores("C:\\Users\\Jordan Allred\\CLionProjects\\Project 1\\scoresFile.txt", "C:\\Users\\Jordan Allred\\CLionProjects\\Project 1\\namesFile.txt");
    }
}

Character Control::readPapers(Character player) {
    player.time -= rand() % 3;
    player.intelligence += rand() % 5;
    return player;
}

Character Control::findChange(Character player) {
    player.time -= rand() % 3;
    player.money += rand() % 5;
    return player;
}

Character Control::takeNap(Character player) {
    player.time -= rand() % 3;
    player.health += rand() % 5;
    return player;
}