#include <iostream>
#include <string>
#include "classes.h"
#include "externs.h"




using namespace std;
extern void CombatDecision();
extern int EnemyHPCurrent;
void GenericEnemyFunction();
Enemy GenericEnemyClass("generic", "the", "slap", 1, 1, 1, 1, 1, 1, 1,1); 
// enemy name, how its address, attack mode, HP, strength, exp earned, gold earned, hunger used, level cap, enemy miss chance, enemy dodge chance
void FoxEnemy() {
    Enemy Fox ("small fox", "the", "bite", 26, 14, 6, 3, 1, 2, 10, 6);
    GenericEnemyClass = Fox;
    GenericEnemyFunction();
    }

void RatEnemy() {
    Enemy Rat("enormous rat", "the", "bite", 34, 19, 9, 5, 1, 3, 8, 6);
    GenericEnemyClass = Rat;
    GenericEnemyFunction();
}

void BoarEnemy() {
    Enemy Boar("angry boar", "the", "charge", 44, 25, 14, 11, 1, 4, 7, 12);
    GenericEnemyClass = Boar;
    GenericEnemyFunction();
}

void BlackBearEnemy() {
    Enemy BlackBear("small black bear", "a", "swipe", 54, 34, 19, 18, 1, 5, 6, 14);
    GenericEnemyClass = BlackBear;
    GenericEnemyFunction();
}

// enemy name, how its address, attack mode, HP, strength, exp earned, hunger used, level cap
void GenericEnemyFunction() { // All enemy classes feed into the GenericEnemyClass object, which then feed over to this function, which then assigns to the global variables
    EnemyName = GenericEnemyClass.EName;
    EnemyFirstName = GenericEnemyClass.EFirstName;
    EnemyWeapon = GenericEnemyClass.EWeapon;
    EnemyHP = GenericEnemyClass.EHP;
    EnemyHPCurrent = EnemyHP;
    EnemyStr = GenericEnemyClass.EStr;
    EnemyEXP = GenericEnemyClass.EEXP;
    EnemyGold = GenericEnemyClass.EGold;
    HungerUse = GenericEnemyClass.HungerUseBattle;
    EnemyLevelCap = GenericEnemyClass.ELevelCap;
    EnemyMissChance = GenericEnemyClass.EMissChance;
    EnemyDodgeChance = GenericEnemyClass.EDodgeChance;
    CombatDecision();
}