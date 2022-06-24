#include "includes.h"
#include "externs.h"

extern void Arena();

using namespace std;

void LevelUp() { // Level up!
    int hpgain{ 1 };
    int strgain{ 1 };
    int defgain{ 1 };
    cout << "\nYou leveled up!" << endl << endl;
    Level = Level + 1;
    Sleep(1500);
    cout << "Level " << Level << "!" << endl << endl;
    Sleep(1000);
    cout << "HP increased by ";
    do {
        srand(time(NULL));
        hpgain = (rand() % 8);
    } while (hpgain < 5); {}
    if (RaceType == 2) {
        hpgain = hpgain + 2;
    }
    Sleep(1000);
    cout << hpgain + ClassHPBonus << "!" << endl;

    cout << "Strength increased by ";
    Sleep(1000);
    srand(time(NULL));
    strgain = ((rand() % 3) + 1);
    if (RaceType == 1) {
        strgain = strgain + 1;
    }

    cout << strgain + ClassStrBonus << "!" << endl;
    cout << "Defense increased by ";
    Sleep(1000);
    srand(time(NULL));
    defgain = ((rand() % 3) + 1);

    if (RaceType == 3) {
        defgain = defgain + 1;
    }
    cout << defgain + ClassDefBonus << "!" << endl;
    if (Level % 2 == 0) {
        cout << "Skill points increased by 1!" << endl;
        SP = SP + 1;
        SPCurrent = SPCurrent + 1;
        Sleep(1000);
    }
    HPCurrent = HPCurrent + (hpgain + ClassHPBonus);
    HP = HP + hpgain;
    Strength = Strength + (strgain + ClassStrBonus);
    Defense = Defense + (defgain + ClassDefBonus);
    ExpNextLevel = ((ExpNextLevel * 1.35) + 20);
    if (Level == 5) {
        cout << "\nYou learned the Jab skill!" << endl << endl;
        cout << "The quick jab skill uses 4 SP - it allows you to attack the enemy at reduced damage, but" << endl;
        cout << "it gives you another attack phase!" << endl;
        Skill2 = "Jab";
        Sleep(1000);
    }
    if (Level == 9) {
        cout << "\nYou learned the Alchemist skill!" << endl << endl;
        cout << "The Alchemist skill is a passive skill that increases the potency of your potions!" << endl;
        cout << "You will heal more from consuming regular and mega potions now." << endl;
        Skill3 = "Alchemist";
        Sleep(1000);
    }
    if (Level == 13) {
        cout << "\nYou learned the Headbutt skill!" << endl << endl;
        cout << "The headbutt skill allows you to attack the enemy, not including weapon damage, with" << endl;
        cout << "a 50/50 chance of causing a daze effect on the enemy, which could cause them to" << endl;
        cout << "miss their attack turn. It costs 4 SP" << endl;
        Skill4 = "Headbutt";
        Sleep(1000);
    }
    if (Level == 17) {
        cout << "\nYou learned the Thrust skill!" << endl << endl;
        cout << "The Thrust skill, which costs 5 SP, has you violently stab your weapon at the enemy," << endl;
        cout << "Causing bleed damage over a randomized period of time." << endl;
        Skill5 = "Thrust";
        Sleep(1000);
    }
    Sleep(1500);
    Arena();

}
