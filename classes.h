#include <iostream>
#include <string>
#include "externs.h"
using namespace std;


class Enemy {
public:
    string EName;
    string EFirstName;
    string EWeapon;
    int EHP;
    int EStr;
    int EEXP;
    int EGold;
    int HungerUseBattle;
    int ELevelCap;
    int EMissChance;
    int EDodgeChance;

    Enemy(const char* name, const char* first, const char* weapon, int hp, int str, int exp, int gold, int hungeruse, int levelcap, int misschance, int dodgechance)
        : EName(name),
        EFirstName(first),
        EWeapon(weapon),
        EHP(hp),
        EStr(str),
        EEXP(exp),
        EGold(gold),
        HungerUseBattle(hungeruse),
        ELevelCap(levelcap),
        EMissChance(misschance),
        EDodgeChance(dodgechance) {};

    Enemy() {};
};

