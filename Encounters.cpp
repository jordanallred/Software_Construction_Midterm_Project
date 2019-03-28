#include "Encounters.h"
#include "Character.h"
#include "Trivia.h"
#include <iostream>
using namespace std;

Character Encounters::runEncounters(Character player) {
    srand(time(0));
    int choose = rand() % 100 + 1;
    int random = rand() % 3 + 1;
    player.changeTime(-1);
    player.changeSteps(-1);
    switch (choose) {

        // Game Enders
        case 1:
            player = ironBowl(player);
            return player;
        case 2:
            player = shelbyStairs(player);
            return player;
        case 3:
            player = springBreak(player);
            return player;
        case 4:
            player = plagiarism(player);
            return player;

        //High Impact
        case 5:
        case 6:
            player = eDay(player, random);
            return player;
        case 7:
        case 8:
            player = samGinn(player, random);
            return player;
        case 9:
        case 10:
            player = missExam(player, random);
            return player;
        case 11:
        case 12:
            player = leath(player, random);
            return player;
        case 13:
        case 14:
            player = tigerCard(player, random);
            return player;
        case 15:
        case 16:
            player = invention(player, random);
            return player;
        case 17:
        case 18:
            player = haleyCenter(player, random);
            return player;
        case 19:
        case 20:
            player = alabamaFan(player);
            return player;
        case 21:
        case 22:
            player = testScore(player, random);
            return player;
        case 23:
        case 24:
            player = allAccess(player, random);
            return player;
        case 25:
        case 26:
            player = aubie(player, random);
            return player;
        case 27:
        case 28:
            player = final(player, random);
            return player;

        //Neutral Impact
        case 29:
        case 30:
        case 31:
        case 32:
            player = nothing(player);
            return player;
        case 33:
        case 34:
        case 35:
        case 36:
            player = professor(player, random);
            return player;
        case 37:
        case 38:
        case 39:
        case 40:
            player = puzzle(player);
            return player;
        case 41:
        case 42:
        case 43:
        case 44:
            player = papers(player, random);
            return player;
        case 45:
        case 46:
        case 47:
        case 48:
            player = change(player, random);
            return player;
        case 49:
        case 50:
        case 51:
        case 52:
            player = co_op(player, random);
            return player;
        case 53:
        case 54:
        case 55:
        case 56:
            player = internship(player, random);
            return player;
        case 57:
        case 58:
        case 59:
        case 60:
            player = study(player, random);
            return player;
        case 61:
        case 62:
        case 63:
        case 64:
            player = cwe(player, random);
            return player;
        case 65:
        case 66:
        case 67:
        case 68:
            player = allNighter(player, random);
            return player;
        case 69:
        case 70:
        case 71:
        case 72:
            player = summerClasses(player, random);
            return player;
        case 73:
        case 74:
        case 75:
        case 76:
            player = medClinic(player, random);
            return player;
        case 77:
        case 78:
        case 79:
        case 80:
            player = thirteen(player, random);
            return player;
        case 81:
        case 82:
        case 83:
        case 84:
            player = fourteen(player, random);
            return player;
        case 85:
        case 86:
        case 87:
        case 88:
            player = fifteen(player, random);
            return player;
        case 89:
        case 90:
        case 91:
        case 92:
            player = sixteen(player, random);
            return player;
        case 93:
        case 94:
        case 95:
        case 96:
            player = seventeen(player, random);
            return player;
        case 97:
        case 98:
        case 99:
        case 100:
            player = eighteen(player, random);
            return player;
    }
}

Character Encounters::ironBowl(Character player) {
    cout << "\n\tAuburn has won the Iron Bowl!!! In the rush to roll Toomer's Corner,\n"
            "\tyou got caught up in the madness and pandemonium, and you were trampled.\n";
    player.health = 0;
    return player;
}
Character Encounters::shelbyStairs(Character player) {
    cout << "\n\tIn your rush to get from Shelby to Parker, you fell down the front steps\n"
            "\tof Shelby Center... You have broken every bone in your body. Sorry.\n";
    player.health = 0;
    return player;
}
Character Encounters::springBreak(Character player) {
    cout << "\n\tSpring Break! You're 21, this is your last one before you head to the real\n"
            "\tworld. But you were reckless and have gotten alcohol poisoning.\n";
    player.health = 0;
    player.money = 0;
    player.intelligence = 0;
    return player;
}
Character Encounters::plagiarism(Character player) {
    cout << "\n\tYou overslept, and completely forgot to type up your paper for class! You\n"
            "\tdecided just to submit the paper you turned in for another class just\n"
            "\tlast week. Unfortunately your professor has seen this paper before... Last\n"
            "\tweek when your other professor showed them what a great essay you wrote.\n"
            "\tYou've been expelled for academic dishonesty and plagiarizing yourself.\n";
    player.intelligence = 0;
    return player;
}


Character Encounters::eDay(Character player, int random) {
    cout << "\n\tYou decided to work E-Day, and you got bonus points! In fact, you even\n"
            "\tyou hopped on a tour and advanced a few spaces!\n";
    player.changeIntelligence(random);
    player.changeSteps(0 - random);
    return player;
}
Character Encounters::samGinn(Character player, int random) {
    cout << "\n\tYou were walking through Shelby and bumped into an older gentleman.\n"
            "\tLittle did you know, this man was Sam Ginn, and you feel smarter\n"
            "\talready! After your talk, he went and paid off all your student loans.\n";
    player.changeIntelligence(random);
    player.changeMoney(random);
    return player;
}
Character Encounters::missExam(Character player, int random) {
    cout << "\n\tYou stayed up all night studying for one of your finals and you ended\n"
            "\tup oversleeping. You ended up failing the class, but at least you're\n"
            "\twell rested.\n";
    player.changeTime(0 - random);
    player.changeIntelligence(0 - random);
    return player;
}
Character Encounters::leath(Character player, int random) {
    cout << "\n\tYou were walking past Samford and saw a familiar face. But you just\n"
            "\tcan't remember who this person is. The two of you talk, and you\n"
            "\tstill can't remember where you know them. Afterward, you receive an\n"
            "\temail from President Steven Leath offering you a grad fellowship!\n";
    player.changeTime(random);
    player.changeIntelligence(random);
    player.changeMoney(random);
    return player;
}
Character Encounters::tigerCard(Character player, int random) {
    cout << "\n\tYou have discovered a Tiger Card with the name scratched out. But\n"
            "\twhen you swipe it, it opens any door. This has helped you advance\n"
            "\ta few spaces!\n";
    player.changeSteps(0 - random);
    return player;
}
Character Encounters::invention(Character player, int random) {
    cout << "\n\tYou invented an artificial intelligence that the US government\n"
            "\tbought from you for \"research purposes\" and has made you\n"
            "\tmore money than you could ever imagine. Thanks big brother!\n";
    player.changeTime(random);
    player.changeIntelligence(random);
    player.changeMoney(random);
    return player;
}
Character Encounters::haleyCenter(Character player, int random) {
    cout << "\n\tYou were sprinting to class in Haley and misread a directional\n"
            "\tsign, and you're now lost. You have been wandering in circles\n"
            "\tfor hours now... \n";
    player.changeTime(0 - random);
    return player;
}
Character Encounters::alabamaFan(Character player) {
    cout << "\n\tOn the way to visit your teacher's office hours, you ran into an\n"
            "\tengineer from the University of Alabama. They start to tell you\n"
            "\tabout how great their engineering program is. Before they can \n"
            "\tfinish counting their ACT average on their fingers, you have lost\n"
            "\thalf of your brain cells.\n";
    player.intelligence = player.intelligence / 2;
    return player;
}
Character Encounters::testScore(Character player, int random) {
    cout << "\n\tYour teacher hands back your test, and you made 100! Later you get\n"
            "\ta Canvas notification that your test has been put in. You check\n"
            "\tyour average in the class, and it has gone up 17 points. It turns\n"
            "\tout your professor accidentally put \"1000\" in for your test grade\n"
            "\tinstead of \"100\"!\n";
    player.changeIntelligence(random);
    return player;
}
Character Encounters::allAccess(Character player, int random) {
    cout << "\n\tYou see an unexpected charge on your e-bill. It turns out, you were\n"
            "\tenrolled in an \"All Access\" class, and you have been charged $320\n"
            "\tfor the textbook. You received an e-mail warning, but it went to\n"
            "\tyour spam folder. Oops.\n";
    player.changeMoney(0 - random);
    return player;
}
Character Encounters::aubie(Character player, int random) {
    cout << "\n\tYou're having a bad day, and you run into Aubie in the Student Center.\n"
            "\tHe gives you a hug, and life is good. Thanks Aubie.\n";
    player.changeMoney(random);
    player.changeIntelligence(random);
    player.changeTime(random);
    player.health = 10;
    player.changeSteps(0 - random);
    return player;
}
Character Encounters::final(Character player, int random) {
    cout << "\n\tYour professor gives you a \"study guide\" for your \"cumulative\" final\n"
            "\tnext week. You study all week, and it turns out that the final was just\n"
            "\ton the things he lectured on last week. You fail the final, and with it,\n"
            "\tthe class because the final was 60% of your grade. War Eagle!\n";
    player.changeIntelligence(0 - random);
    return player;
}

Character Encounters::nothing(Character player) {
    cout << "\n\tNothing happened.\n";
    return player;
}
Character Encounters::professor(Character player, int random) {
    cout << "\n\tYou ran into a professor who imparted some wisdom to you.\n";
    player.changeIntelligence(random);
    return player;
}
Character Encounters::puzzle(Character player) {
    cout << "\n\tYou've encountered the puzzle masters Aaron, Bob, and Charlie...\n";
    Trivia newTrivia{};
    newTrivia.count = newTrivia.getCount("C:\\Users\\Jordan Allred\\CLionProjects\\Project 1\\triviaFile.txt");
    player = newTrivia.readTrivia("C:\\Users\\Jordan Allred\\CLionProjects\\Project 1\\triviaFile.txt", newTrivia.count, player);
    return player;
}
Character Encounters::papers(Character player, int random) {
    cout << "\n\tYou read some more papers. Riveting.\n";
    player.changeIntelligence(random);
    return player;
}
Character Encounters::change(Character player, int random) {
    cout << "\n\tLoose change anyone? Oh well.\n";
    player.changeMoney(random);
    return player;
}
Character Encounters::co_op(Character player, int random) {
    cout << "\n\tYou decided to co-op!\n"
            "\tReap the benefits of real world work experience!\n";
    player.changeTime(0 - random);
    player.changeMoney(random);
    return player;
}
Character Encounters::internship(Character player, int random) {
    cout << "\n\tYou decided to intern!\n"
            "\tReap the benefits of a co-op and graduate on time!.\n";
    player.changeMoney(random);
    return player;
}
Character Encounters::study(Character player, int random) {
    cout << "\n\tYou studied at the library. How studious!\n";
    player.changeIntelligence(random);
    return player;
}
Character Encounters::cwe(Character player, int random) {
    cout << "\n\tYou went through camp war eagle. A little time\n"
            "\tconsuming, but all that Auburn knowledge!\n";
    player.changeTime(0 - random);
    player.changeIntelligence(random);
    return player;
}
Character Encounters::allNighter(Character player, int random) {
    cout << "\n\tYou pulled an all nighter studying for a test.\n"
            "\tBut was it really worth it? All the caffeine.\n";
    player.changeIntelligence(random);
    player.changeHealth(0 - random);
    return player;
}
Character Encounters::summerClasses(Character player, int random) {
    cout << "\n\tYou took summer classes. Look at you getting ahead.\n";
    player.changeIntelligence(random);
    return player;
}
Character Encounters::medClinic(Character player, int random) {
    cout << "\n\tYou went to the Med Clinic. Long wait.\n"
            "\tGood for the body. Not for the wallet.\n";
    player.changeMoney(0 - random);
    player.changeHealth(random);
    return player;
}
Character Encounters::thirteen(Character player, int random) {
    cout << "\n\tYou didn't realize the professor reused old tests every\n"
            "\tyear. You failed, and all your friends made a 100.\n";
    player.changeIntelligence(0 - random);
    return player;
}
Character Encounters::fourteen(Character player, int random) {
    cout << "\n\tYou went to rodeo. Now you're poor AND stupid.\n";
    player.changeMoney(0 - random);
    player.changeIntelligence(0 - random);
    return player;
}
Character Encounters::fifteen(Character player, int random) {
    cout << "\n\tYou attempted to climb Foy. You fell, and have injured\n"
            "\tboth your pride and your head. Congrats.\n";
    player.changeHealth(0 - random);
    player.changeIntelligence(0 - random);
    return player;
}
Character Encounters::sixteen(Character player, int random) {
    cout << "\n\tYou were trying to go see an informative movie at the library\n"
            "\tand the Honors College invited the president of the white\n"
            "\tstudent union to speak.\n";
    player.changeIntelligence(0 - random);
    return player;
}
Character Encounters::seventeen(Character player, int random) {
    cout << "\n\tIt's syllabus week, and you decided to go out with your friends.\n"
            "\tYou quickly realize you're not a freshman anymore, and being old\n"
            "\tsucks.\n";
    player.changeMoney(0 - random);
    player.changeHealth(0 - random);
    return player;
}
Character Encounters::eighteen(Character player, int random) {
    cout << "\n\tYou were walking to your car from the library and were struck\n"
            "\tby a car. You've gone into a coma and the hospital isn't cheap.\n";
    player.changeHealth(0 - random);
    player.changeIntelligence(0 - random);
    player.changeMoney(0 - random);
    return player;
}