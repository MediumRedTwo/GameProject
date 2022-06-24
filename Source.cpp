#include "includes.h"
#include "variables.h"
#include "functions.h"
#include "classes.h"



int main() {

    cout << "**************************************************" << endl; //50 asterisks
    cout << "*" << setw(49) << "*" << endl;
    cout << "*" << setw(49) << "*" << endl;
    cout << "*" << setw(49) << "*" << endl;
    cout << "*" << setw(49) << "*" << endl;
    cout << "*" << setw(30) << "Shattered Lands" << setw(19) << "*" << endl;
    cout << "*" << setw(49) << "*" << endl;
    cout << "*" << setw(49) << "*" << endl;
    cout << "*" << setw(49) << "*" << endl;
    cout << "*" << setw(49) << "*" << endl;
    cout << "**************************************************" << endl << endl << endl;
    Sleep(2000);

    cout << "A C++ project by Kyle to re-write a " << endl;
    cout << "calculator game made in highschool" << endl;
    cout << "\nControls: Unless noted otherwise, menu items will be listed by number - " << endl;
    cout << "type the number you wish to select and hit enter" << endl << endl;

    Sleep(3000);
    MainMenu();
    return 0;
}

void MainMenu() {                            // Main Menu
    string input1{};
    do {
        cout << "\nMain Menu" << endl;
        cout << "1. New Game" << endl;
        cout << "2. Load Game" << endl;
        cout << "3. Quit Game" << endl;
        cout << "Type input here: ";
        getline(cin, input1);
    } while (input1 != "1" && input1 != "2" && input1 != "3"); {}
    if (input1 == "1") {
        NewGame();
    }
    else if (input1 == "2") {
        ifstream LoadFile("Save.sl");
        if (!LoadFile.is_open())
        {
            cout << "\nNo save file found..." << endl;
            Sleep(1500);
            MainMenu();
        }
        while (LoadFile >> Name >> Race >> RaceType >> Level >> Exp >> ExpNextLevel >> HPCurrent >> HP >> SP >> SPCurrent >> Strength >> Defense >> Dodge >>  //moved to lower line so it doesn't look like garbage
            Gold >> Potions >> MegaPotions >> FoodOnHand >> HungerCurrent >> HungerMax >> WeaponType >> WeaponAttack >> WeaponNumber >> ArmorType >> ArmorDefense >> ArmorNumber
            >> Skill1 >> Skill2 >> Skill3 >> Skill4 >> Skill5 >> GladiatorRank >> StoryLocation >> HPBonus >> SPBonus >> STRBonus >> DEFBonus >> ACCBonus >> DodgeBonus >> GoldBonus >> AccessoryType
            >> Acc0 >> Acc1 >> Acc2 >> Acc3 >> Acc4 >> Acc5 >> Acc6 >> Acc7 >> Acc8 >> Acc9 >> ClassHPBonus >> ClassStrBonus >> ClassDefBonus >> ClassGoldBonus) {
        }
        cout << "\nProgress loaded." << endl;
        Sleep(1500);
        Camp();
    } 
    else if (input1 == "3") {
        exit(0);
    }
}

void NewGame() {                            //New Game

    string input1{};
    cout << "\nEnter your characters name (one word - type random for name randomizer): ";
    getline(cin, Name);
    if (Name == "random") {
        NameRandomizer(Name);
    }
    cout << "\nAre you happy with the name " << Name << "?" << endl;
    cout << "1 for yes, 2 for no - Type input here: ";
    getline(cin, input1);
    if (input1 == "1") {
        PickRace();
    }
    else if (input1 == "2") {
        NewGame();
    }
    else if (input1 != "1" && input1 != "2") {
        cout << "\nInvalid Input" << endl;
        NewGame();
    }
}



void PickRace() {                        // Picking the players race
    string RacePick{};
    do {
        cout << "\nSelecting your race for Shattered Lands determines your starting stats, gear and money." << endl;
        cout << "All races level up differently." << endl << endl;

        cout << "\nPick your race:" << endl;
        cout << "1. Human" << endl;
        cout << "2. Elf" << endl;
        cout << "3. Dwarf" << endl;
        cout << "\nType input here: ";
        getline(cin, RacePick);
    } while (RacePick != "1" && RacePick != "2" && RacePick != "3"); {}
    if (RacePick == "1") {
        Race = "Human";
        RaceType = 1;
        HP = 30;
        HPCurrent = 30;
        Strength = 8;
        Defense = 6;
        Dodge = 1;
        Gold = 35;
        Potions = 2;
        MegaPotions = 0;
        WeaponNumber = 1;
        ArmorNumber = 1;
        WeaponType = "Dagger";
        WeaponAttack = 3;
        ArmorDefense = 2;
        ArmorType = "Leather";
        AccessoryType = "None";
        FoodOnHand = 4;
        SP = 10;
        SPCurrent = 10;
        string Skill1 = "Strike";
        string Skill2 = "Unlearned";
        string Skill3 = "Unlearned";
        string Skill4 = "Unlearned";
        string Skill5 = "Unlearned";
        GladiatorRank = 0;
        StoryLocation = 0;
        ACCBonus = 0;
        DodgeBonus = 0;
        StoryIntroHuman();
    }
    else if (RacePick == "2") {
        Race = "Elf";
        RaceType = 2;
        HP = 28;
        HPCurrent = 28;
        Strength = 6;
        Defense = 5;
        Dodge = 2;
        Gold = 10;
        Potions = 2;
        MegaPotions = 0;
        WeaponNumber = 1;
        ArmorNumber = 1;
        WeaponType = "Dagger";
        WeaponAttack = 3;
        ArmorDefense = 2;
        ArmorType = "Leather";
        AccessoryType = "None";
        FoodOnHand = 3;
        SP = 10;
        SPCurrent = 10;
        string Skill1 = "Strike";
        string Skill2 = "Unlearned";
        string Skill3 = "Unlearned";
        string Skill4 = "Unlearned";
        string Skill5 = "Unlearned";
        GladiatorRank = 0;
        StoryLocation = 0;
        ACCBonus = 0;
        DodgeBonus = 0;
        StoryIntroElf();
    }
    else if (RacePick == "3") {
        Race = "Dwarf";
        RaceType = 3;
        HP = 32;
        HPCurrent = 32;
        Strength = 10;
        Defense = 6;
        Dodge = 1;
        Gold = 10;
        Potions = 2;
        MegaPotions = 0;
        WeaponNumber = 1;
        ArmorNumber = 0;
        WeaponType = "Dagger";
        WeaponAttack = 3;
        ArmorDefense = 1;
        ArmorType = "Cloth";
        AccessoryType = "None";
        FoodOnHand = 3;
        SP = 10;
        SPCurrent = 10;
        string Skill1 = "Strike";
        string Skill2 = "Unlearned";
        string Skill3 = "Unlearned";
        string Skill4 = "Unlearned";
        string Skill5 = "Unlearned";
        GladiatorRank = 0;
        StoryLocation = 0;
        ACCBonus = 0;
        DodgeBonus = 0;
        StoryIntroDwarf();
    }

}
void StoryIntroHuman() {                  // Intro story to the human race 

    cout << endl << endl << Name << ", as the human child of a minor noble from the Kingdom of Edehmaar," << endl << "your life was not fraught with difficulty or strife, " << endl;
    cout << "rather luxury and peace. While you were expected to serve in the kingdoms military, " << endl << "you had not yet started your training." << endl << endl;
    Sleep(5000);
    cout << "Tragedy struck your family when your fathers life was unexpectedly extinguished by a bandit group" << endl;
    cout << "while on the road after visiting a neighboring noble to finalize some business dealings." << endl << endl;
    Sleep(5000);
    cout << "Your information channels have determined the location of the bandits to a" << endl << "neutral territory with no formal government, " << endl;
    cout << "A town called Althane, nearest settlement to the location of the bandit hideaway," << endl << "home to a gladiator arena and a den of snakes and thieves" << endl << endl;
    Sleep(5000);
    cout << "Leaving your little brother in charge of the families affairs, you set off to Althane," << endl << "hoping to train, gain strength, and eventually" << endl;
    cout << "face the leader of this bandit group and end his life in combat, a man simply known as Gray" << endl << endl;
    Sleep(5000);
    cout << "To get the attention of Gray and face him in combat, you must reach level 20." << endl;
    cout << "Your story starts now" << endl;
    Sleep(5000);
    StoryIntro();

}

void StoryIntroElf() {                  // intro story to the elf race

    cout << endl << endl << Name << ", as proud elf from the Vallenwoods of Mebn Ehlweb, your life" << endl << "has been one of being in-tune with the world and the woods around you," << endl;
    cout << "living with nature, not inspite of it. Life was peaceful." << endl << endl;
    Sleep(5000);
    cout << "Without warning, the fires of men burnt like a raging phoenix across the Vallenwoods, torching" << endl << "the woodland realm you had called home your entire life, " << endl;
    cout << "for no other reason than to make room for farming." << endl << endl;
    Sleep(5000);
    cout << "Your peoples scouts have determined your homes were burnt by a bandit group near " << endl << "a settlement called Althane - home to a gladiator arena and overall a den of snakes and thieves." << endl << endl;
    Sleep(5000);
    cout << "Leaving your people, you set off to Althane," << endl << "hoping to train, gain strength, and eventually" << endl;
    cout << "face the leader of this bandit group and end his life in combat, a man simply known as Gray" << endl << endl;
    Sleep(5000);
    cout << "To get the attention of Gray and face him in combat, you must reach level 20." << endl;
    cout << "Your story starts now" << endl;
    Sleep(5000);
    StoryIntro();
}

void StoryIntroDwarf() {            // intro story to the dwarf race

    cout << endl << endl << Name << ", a member of the hill dwarf tribe Wargar of the great fortress of Thaxanos." << endl << "While not as strong or tough as your mountain dwelling brethren," << endl;
    cout << "your people are just as hardy while living up on the surface." << endl << endl;
    Sleep(5000);
    cout << "While on a routine trading venture to a nearby human settlement, your trade column was" << endl << "ambushed by bandits. You were knocked out, robbed, and left for dead." << endl << endl;
    Sleep(5000);
    cout << "When you came to, you found you were the only survivor, and your thane had been killed." << endl << "You made your way to the human settlement to find answers and to enact revenge." << endl << endl;
    Sleep(5000);
    cout << "The folks at the settlement had heard of the attack and identified the bandit group, led by a man named Gray, who" << endl << "made camp outside town called Althane in a neutral area south of Thaxanos." << endl;
    cout << "Althane was home to a gladiator arena - other than that, it was a den of snakes and thieves." << endl << "You compose yourself and head towards Althane, ready to enact your revenge." << endl << endl;
    Sleep(5000);
    cout << "To get the attention of Gray and face him in combat, you must reach level 20." << endl;
    cout << "Your story starts now" << endl;
    Sleep(5000);
    StoryIntro();
}

void StoryIntro() {                     // Where all the intro racial stories will go next

    cout << "\nAfter a long trek you finally make it to the outskirts of Althane. You construct a simple" << endl;
    cout << "lean-to shelter and fire pit. This will be your home while you train, fight, and eventually hunt down Gray." << endl << endl;
    Sleep(5000);
    cout << "At your campsite you can rest, eat, check your stats and double check your objective." << endl << "Heading into town you can buy new gear, food, or train at the gladiator arena." << endl;
    cout << "Certain actions, such as training, will lower your hunger gauge - you can restore your" << endl << "hunger by eating at camp, or staying at the inn, which will restore your HP and hunger gauge." << endl << endl;
    Sleep(3000);
    cout << "Be warned, sleeping outside of town carries its own set of risks." << endl << endl;
    Sleep(3000);
    Camp();
}

void Camp() {                        // Camping menu

    string CampInput = "Nothing";
    do {
        cout << "\nAt your campsite" << endl << endl;
        cout << "Hidden in the woods, far outside town and from any prying eyes, your campsite is setup with simplicity and" << endl;
        cout << "function in mind. You have constructed a robust lean-to and made a simple bed of foliage scavenged from" << endl;
        cout << "the area. A fire pit has been constructed inside a ring of stone - a meat spit hovers over the low flame." << endl << endl;
        cout << "What is your next move?" << endl;
        cout << "1. Go to town" << endl;
        cout << "2. Check your stats" << endl;
        cout << "3. Eat food" << endl;
        cout << "4. Drink a potion" << endl;
        cout << "5. Sleep and forage" << endl;
        cout << "6. Save game" << endl;
        cout << "7. Quit game" << endl;

        cout << "\nInput your choice: ";
        getline(cin, CampInput);
    } while (CampInput != "1" && CampInput != "2" && CampInput != "3" && CampInput != "4" && CampInput != "5" && CampInput != "6" && CampInput != "7"); {}

    if (CampInput == "1") {
        InTown();
    }
    else if (CampInput == "2") {
        StatsLocation = 1;
        StatsMenu();
    }
    else if (CampInput == "3") {
        EatFood();
    }
    else if (CampInput == "4") {
        CampPotion();
    }
    else if (CampInput == "5") {
        SleepTime();
    }
    else if (CampInput == "6") {
        SaveMenu();
    }
    else if (CampInput == "7") {
        exit(0);
    }
}

void StatsMenu() {                       // Character stats

    cout << " " << endl << endl;
    cout << "Stats" << endl << endl;

    cout << "Name: " << Name << setw(8) << "Race: " << Race << endl;
    cout << "Level: " << Level << endl;
    cout << "Exp (current/next level): " << setw(3) << Exp << " / " << ExpNextLevel << endl;
    cout << "Hitpoints (current/max): " << setw(3) << HPCurrent << " / " << (HP + HPBonus) << " (+" << HPBonus << ")" << endl;
    cout << "Skillpoints (current/max): " << setw(3) << SPCurrent << " / " << (SP + SPBonus) << " (+" << SPBonus << ")" << endl;
    cout << "Strength: " << (Strength + STRBonus) << " (+" << STRBonus << ")" << setw(14) << "Defense: " << (Defense + DEFBonus) << " (+" << DEFBonus << ")" << endl;
    cout << "Gold: " << Gold << setw(22) << "Food on Hand: " << FoodOnHand << endl;
    cout << "Potions: " << Potions << setw(18) << "Mega Potions: " << MegaPotions << endl;
    cout << "Hunger (current/max): " << setw(3) << HungerCurrent << " / " << HungerMax << endl;
    cout << "Current Weapon: " << WeaponType << setw(40) << "Additional Weapon Damage: " << WeaponAttack << endl;
    cout << "Armor Type: " << ArmorType << setw(40) << "Additional Armor Protection: " << ArmorDefense << endl;
    cout << "Accessory Worn: ";
    AccEquipName();
    cout << "Skills learned:" << endl << "--------------------------------------------" << endl;
    cout << Skill1 << endl << Skill2 << endl << Skill3 << endl << Skill4 << endl << Skill5 << endl << endl;
    string menuchoice = "nothing";
    do {
        
        cout << "Equip a new accessory or go back to the camp menu?" << endl << endl;
        cout << "1. Equip a new accessory" << endl << "2. Return to camp menu" << endl;
        cout << "\nInput your choice: ";
        getline(cin, menuchoice);
    } while (menuchoice != "1" && menuchoice != "2"); {}

    if (menuchoice == "1"){
        AccEquip();
    }
    else if (menuchoice == "2") {
        Camp();
    }
}

void EatFood() {                                    //eating food menu

    if (FoodOnHand <= 0) {
        cout << "\nYou don't have any food..." << endl;
        Sleep(1500);
        Camp();
    }
    if (HungerCurrent >= HungerMax) {
        cout << "\nYou are not hungry..." << endl;
        Sleep(1500);
        Camp();
    }

    int foodoutput{ 1 };
    srand(time(NULL));
    foodoutput = (rand() % 6);

    if (foodoutput == 0) {
        cout << "\nYou eat a delicious pink apple and are no longer hungry." << endl;
        cout << "You also restore 5 HP and 2 SP in the process." << endl;
        HPCurrent = HPCurrent + 5;
        SPCurrent = SPCurrent + 2;
    }
    else if (foodoutput == 1) {
        cout << "\nYou eat a large handful of berries and are no longer hungry." << endl;
        cout << "You also restore 4 HP and 1 SP in the process." << endl;
        HPCurrent = HPCurrent + 4;
        SPCurrent = SPCurrent + 1;
    }
    else if (foodoutput == 2) {
        cout << "\nYou eat a loaf of bread and are no longer hungry." << endl;
        cout << "You also restore 9 HP and 3 SP in the process." << endl;
        HPCurrent = HPCurrent + 9;
        SPCurrent = SPCurrent + 3;
    }
    else if (foodoutput == 3) {
        cout << "\nYou eat a bowl of beef stew and are no longer hungry." << endl;
        cout << "You also restore 15 HP and 4 SP in the process." << endl;
        HPCurrent = HPCurrent + 15;
        SPCurrent = SPCurrent + 4;
    }
    else if (foodoutput == 4) {
        cout << "\nYou eat a squirrel kebab and are no longer hungry." << endl;
        cout << "You also restore 8 HP and 3 SP in the process." << endl;
        HPCurrent = HPCurrent + 8;
        SPCurrent = SPCurrent + 3;
    }
    else if (foodoutput == 5) {
        cout << "\nYou eat a deer backstrap steak and are no longer hungry." << endl;
        cout << "You also restore 22 HP and 5 SP in the process." << endl;
        HPCurrent = HPCurrent + 22;
        SPCurrent = SPCurrent + 5;
    }
    if (HPCurrent > (HP + HPBonus)){
        HPCurrent = (HP + HPBonus);
    }
    if (SPCurrent > (SP + SPBonus)) {
        SPCurrent = (SP + SPBonus);
    }
    HungerCurrent = HungerMax;
    FoodOnHand = FoodOnHand - 1;
    Sleep(1500);
    Camp();
}

void CampPotion() {    // Drinking potions 

    if (HPCurrent == HP) {
        cout << "\nYou don't need any potions..." << endl << endl;
        Sleep(1500);
        Camp();
    }

    string input1 = "nothing";
    do {
        cout << "\nHP " << HPCurrent << " / " << HP << endl;
        cout << "\nWhich type of potion are you going to drink?" << endl << endl;
        cout << "1. Potion (" << Potions << ")" << endl;
        cout << "2. Mega Potion (" << MegaPotions << ")" << endl;
        cout << "3. Never mind..." << endl << endl;
        cout << "Input your choice: ";
        getline(cin, input1);
    } while (input1 != "1" && input1 != "2" && input1 != "3"); {}

    if (input1 == "1") {
        if (Potions == 0) {
            cout << "\nYou don't have any potions!" << endl;
            Sleep(1500);
            CampPotion();
        }
        int potioncure{ 1 };
        int randomizer{ 1 };
        srand(time(NULL));
        randomizer = (rand() % 4);
        potioncure = (HP * .1) + (20 + randomizer);
        if (Level > 8) {
            potioncure = potioncure + 10;
        }
        cout << "\nYou healed " << potioncure << " HP!" << endl;
        HPCurrent = HPCurrent + potioncure;
        Potions = Potions - 1;
        Sleep(1500);
        if (HPCurrent > (HP + HPBonus)) {
            HPCurrent = (HP + HPBonus);
        }
        if (PotionInt == 1) {
            Camp();
        }
        if (PotionInt == 2) {
            if (BleedTimer < 2 && BleedOn == 1) { // ENDING BLEED TIMER
                cout << "\nThe " << EnemyName << " stops bleeding!" << endl;
                BleedTimer = 0;
                BleedOn = 0;
                Sleep(1500);
            }
            if (BleedTimer > 1 && BleedOn == 1) { // BLEED TIMER
                int bleedamount{ 1 };
                int bleedrando{ 1 };
                srand(time(NULL));
                bleedrando = ((rand() % 2) + 3);
                bleedamount = ((EnemyHP * .08) + bleedrando);
                cout << "\nThe " << EnemyName << " bleeds for " << bleedamount << " damage!" << endl;
                EnemyHPCurrent = EnemyHPCurrent - bleedamount;
                BleedTimer = BleedTimer - 1;
                Sleep(1500);
            }
            if (EnemyHPCurrent < 1) {
                Victory();
            }
            EnemyAttack();
        }
    }
    if (input1 == "2") {
        if (MegaPotions == 0) {
            cout << "\nYou don't have any mega potions!" << endl;
            Sleep(1500);
            CampPotion();
        }
        int megapotioncure{ 1 };
        int megarandomizer{ 1 };
        srand(time(NULL));
        megarandomizer = (rand() % 6);
        megapotioncure = (HP * .15) + (40 + megarandomizer);
        if (Level > 8) {
            megapotioncure = megapotioncure + 15;
        }
        cout << "\nYou healed " << megapotioncure << " HP!" << endl;
        HPCurrent = HPCurrent + megapotioncure;
        MegaPotions = MegaPotions - 1;
        Sleep(1500);
        if (HPCurrent > (HP + HPBonus)) {
            HPCurrent = (HP + HPBonus);
        }
        if (PotionInt == 1) {
            Camp();
        }
        if (PotionInt == 2) {
            if (BleedTimer < 2 && BleedOn == 1) { // ENDING BLEED TIMER
                cout << "\nThe " << EnemyName << " stops bleeding!" << endl;
                BleedTimer = 0;
                BleedOn = 0;
                Sleep(1500);
            }
            if (BleedTimer > 1 && BleedOn == 1) { // BLEED TIMER
                int bleedamount{ 1 };
                int bleedrando{ 1 };
                srand(time(NULL));
                bleedrando = ((rand() % 2) + 3);
                bleedamount = ((EnemyHP * .08) + bleedrando);
                cout << "\nThe " << EnemyName << " bleeds for " << bleedamount << " damage!" << endl;
                EnemyHPCurrent = EnemyHPCurrent - bleedamount;
                BleedTimer = BleedTimer - 1;
                Sleep(1500);
            }
            if (EnemyHPCurrent < 1) {
                Victory();
            }
            EnemyAttack();
        }
    }

    if (input1 == "3") {
        if (PotionInt == 1) {
            Camp();
        }
        if (PotionInt == 2) {
            EnemyAttack();
        }
    }
}
void SleepTime() {    // Sleep time

    cout << "\nYou bed down for the night and dream about home";
    Sleep(750);
    cout << ".";
    Sleep(750);
    cout << ".";
    Sleep(750);
    cout << "." << endl;
    Sleep(750);

    int sleepoutput{ 1 };
    srand(time(NULL));
    sleepoutput = (rand() % 5);

    if (sleepoutput == 0) {
        cout << "\nYou were robbed overnight! Some of your supplies have been taken..." << endl;
        int robbed{ 1 };
        srand(time(NULL));
        robbed = (rand() % 4);
        if (robbed == 0) {
            MegaPotions = MegaPotions - 1;
        }
        if (robbed == 1) {
            FoodOnHand = (FoodOnHand * .8) - 1;
        }
        Potions = Potions - 1;
        int goldlost{ 1 };
        srand(time(NULL));
        goldlost = (rand() % 9);
        Gold = (Gold * .85) - (goldlost + 2);
        Sleep(1500);
    }

    int foodgain{ 1 };
    srand(time(NULL));
    foodgain = ((rand() % 2) + 2);

    cout << "\nYou forage around and find some wild edibles, recovering " << foodgain << " hunger points" << endl;
    HPCurrent = (HP + HPBonus);
    HungerCurrent = HungerCurrent + foodgain;
    SPCurrent = (SP + SPBonus);

    if (Gold < 0) {
        Gold = 0;
    }
    if (HungerCurrent > HungerMax) {
        HungerCurrent = HungerMax;
    }
    if (Potions < 0) {
        Potions = 0;
    }
    if (MegaPotions < 0) {
        MegaPotions = 0;
    }
    if (FoodOnHand < 0) {
        FoodOnHand = 0;
    }
    Sleep(1000);
    Camp();

}
void SaveMenu() {                                       // Save menu

    ofstream file("Save.sl");
    file << Name << endl << Race << endl << RaceType << endl << Level << endl << Exp << endl << ExpNextLevel << endl << HPCurrent << endl << HP //splitting up the lines so it doesn't look so terrible
        << endl << SP << endl << SPCurrent << endl << Strength << endl << Defense << endl << Dodge << endl << Gold << endl << Potions << endl << MegaPotions << endl << FoodOnHand << endl << HungerCurrent
        << endl << HungerMax << endl << WeaponType << endl << WeaponAttack << endl << WeaponNumber << endl << ArmorType << endl << ArmorDefense << endl << ArmorNumber << endl
        << Skill1 << endl << Skill2 << endl << Skill3 << endl << Skill4 << endl << Skill5 << endl << GladiatorRank << endl << StoryLocation << endl << HPBonus << endl << SPBonus << endl << STRBonus
        << endl << DEFBonus << endl << ACCBonus << endl << DodgeBonus << endl << GoldBonus << endl << AccessoryType << endl << Acc0 << endl << Acc1 << endl << Acc2 << endl << Acc3 <<endl << Acc4
        << endl << Acc5 << endl << Acc6 << endl << Acc7 << endl << Acc8 << endl << Acc9 << endl << ClassHPBonus << endl << ClassStrBonus << endl << ClassDefBonus << endl << ClassGoldBonus;
    cout << "\nProgress saved." << endl;
    Sleep(1500);
    Camp();
}

void InTown() {             // Althane town square landing page                                                                                    

    string input1 = "Nothing";
    do {
        cout << "\nAlthane market square" << endl << endl;
        cout << "Wandering around the Althane market square, you're met with numerous amounts of people just going" << endl;
        cout << "about their lives. Shops line both sides of the street - an armorer on the west side of the market and" << endl;
        cout << "a weaponsmith on the east side both catch your attention. A general store found up the road looks to " << endl;
        cout << "filled with many useful items. The inn next door looks surprisingly well kept compared to the rather " << endl;
        cout << "dingy look of the rest of the town. The gladiator arena looms off in the distance." << endl << endl;
        cout << "What is your next move?" << endl;
        cout << "1. Go to the arena" << endl;
        cout << "2. Visit the inn" << endl;
        cout << "3. Browse the general store" << endl;
        cout << "4. Peruse the weapon shop" << endl;
        cout << "5. Check over the armor shop" << endl;
        cout << "6. Inspect the accessory shop" << endl;
        cout << "7. Head back to camp" << endl;

        cout << "\nInput your choice: ";
        getline(cin, input1);
    } while (input1 != "1" && input1 != "2" && input1 != "3" && input1 != "4" && input1 != "5" && input1 != "6" && input1 != "7"); {}


    if (input1 == "1") {
        Arena();
    }
    if (input1 == "2") {
        Inn();
    }
    if (input1 == "3") {
        GeneralStore();
    }
    if (input1 == "4") {
        WeaponStore();
    }
    if (input1 == "5") {
        ArmorStore();
    }
    if (input1 == "6") {
        AccessoryStore();
    }
    if (input1 == "7") {
        Camp();
    }
}

void Inn() {  // Inn menu

    string input1 = "nothing";
    do {
        cout << "\nThe Burning Sands Inn" << endl;
        cout << "\nYou step foot inside the relatively well kept and quiet inn, a welcome refuge from the noise and grime of the" << endl;
        cout << "street outside. A few tables on the floor level have patrons sitting at them, eating a meal prepared by the " << endl;
        cout << "inn's head chef. As you approach the counter, the young woman working the front of the inn smiles and  " << endl;
        cout << "greets you. She informs you that a room is 25 gold, with a meal included." << endl << endl;
        cout << "Do you stay the night?" << endl;
        cout << "1. Rent a room" << endl;
        cout << "2. Leave" << endl;
        cout << "\nInput your choice: ";
        getline(cin, input1);
    } while (input1 != "1" && input1 != "2"); {}

    if (input1 == "1") {
        if (Gold < 25) {
            cout << endl << "Turns out you don't have enough gold. The woman working the counter smiles sweetly " << endl;
            cout << "to you as she points to the door." << endl;
            Sleep(1500);
            InTown();
        }
        cout << "\nThe woman working the counter smiles to you, handing you a key and a large bowl of stew, " << endl;
        cout << "pointing to your room up the stairs. You make your way to your room, polishing " << endl;
        cout << "off the stew and crawling into the comfortable bed, dreaming of being home";
        Sleep(750);
        cout << ".";
        Sleep(750);
        cout << ".";
        Sleep(750);
        cout << "." << endl;
        Sleep(750);
        Gold = Gold - 25;
        HPCurrent = (HP + HPBonus);
        SPCurrent = (SP + SPBonus);
        HungerCurrent = HungerMax;
        InTown();
    }
    if (input1 == "2") {
        InTown();
    }

}

void GeneralStore() {  // GENERAL STORE

    string input1 = "store";
    do {
        cout << "\nThe Althane General Store" << endl << endl;
        cout << "As you enter the general store, you're met by rows of well organized cherry-wood display cases," << endl;
        cout << "from camping supplies, to healing potions, to food, this shop seems to have everything you would" << endl;
        cout << "need. The half Elven shop keeper gives you a smile and a nod before he asks if you he can help " << endl;
        cout << "you find anything in particular." << endl << endl;
        cout << "What is your next move?" << endl;
        cout << "1. Buy food" << endl;
        cout << "2. Buy potions" << endl;
        cout << "3. Buy mega potions" << endl;
        cout << "4. Leave the general store" << endl << endl;
        cout << "Input your choice: ";
        getline(cin, input1);
    } while (input1 != "1" && input1 != "2" && input1 != "3" && input1 != "4"); {}


    if (input1 == "1") {   // FOOD
        string inputfood = "n";
        do {
            cout << "\nHow many do you want? You have " << Gold << " gold." << endl;
            cout << "1. 1 food ration (15 gold)" << endl;
            cout << "2. 5 food rations (65 gold)" << endl;
            cout << "3. Never mind..." << endl;

            cout << "\nInput your choice: ";
            getline(cin, inputfood);
        } while (inputfood != "1" && inputfood != "2" && inputfood != "3"); {}
        if (inputfood == "1") {
            if (Gold < 15) {
                cout << "\nYou don't have enough gold for that!" << endl;
                Sleep(1200);
                GeneralStore();
            }
            FoodOnHand = FoodOnHand + 1;
            Gold = Gold - 15;
            cout << "\nThe shopkeep thanks you for your purchase and hands you a ration" << endl;
            Sleep(1500);
            GeneralStore();
        }
        if (inputfood == "2") {
            if (Gold < 65) {
                cout << "\nYou don't have enough gold for that!" << endl;
                Sleep(1200);
                GeneralStore();
            }
            FoodOnHand = FoodOnHand + 5;
            Gold = Gold - 65;
            cout << "\nThe shopkeep thanks you for your purchase and hands you 5 food rations" << endl;
            Sleep(1500);
            GeneralStore();
        }
        if (inputfood == "3") {
            GeneralStore();
        }
    }

    if (input1 == "2") {   // POTIONS
        string inputpot = "n";
        do {
            cout << "\nHow many do you want? You have " << Gold << " gold." << endl;
            cout << "1. 1 potion (20 gold)" << endl;
            cout << "2. 5 potions (95 gold)" << endl;
            cout << "3. Never mind..." << endl;

            cout << "\nInput your choice: ";
            getline(cin, inputpot);
        } while (inputpot != "1" && inputpot != "2" && inputpot != "3"); {}
        if (inputpot == "1") {
            if (Gold < 20) {
                cout << "\nYou don't have enough gold for that!" << endl;
                Sleep(1200);
                GeneralStore();
            }
            Potions = Potions + 1;
            Gold = Gold - 20;
            cout << "\nThe shopkeep thanks you for your purchase and hands you a potion" << endl;
            Sleep(1500);
            GeneralStore();
        }
        if (inputpot == "2") {
            if (Gold < 95) {
                cout << "\nYou don't have enough gold for that!" << endl;
                Sleep(1200);
                GeneralStore();
            }
            Potions = Potions + 5;
            Gold = Gold - 95;
            cout << "\nThe shopkeep thanks you for your purchase and hands you 5 potions" << endl;
            Sleep(1500);
            GeneralStore();
        }
        if (inputpot == "3") {
            GeneralStore();
        }
    }

    if (input1 == "3") {   //  MEGA POTIONS
        string inputmpot = "n";
        do {
            cout << "\nHow many do you want? You have "  << Gold << " gold." << endl;
            cout << "1. 1 mega potion (75 gold)" << endl;
            cout << "2. 5 mega potions (350 gold)" << endl;
            cout << "3. Never mind..." << endl;

            cout << "\nInput your choice: ";
            getline(cin, inputmpot);
        } while (inputmpot != "1" && inputmpot != "2" && inputmpot != "3"); {}
        if (inputmpot == "1") {
            if (Gold < 75) {
                cout << "\nYou don't have enough gold for that!" << endl;
                Sleep(1200);
                GeneralStore();
            }
            MegaPotions = MegaPotions + 1;
            Gold = Gold - 75;
            cout << "\nThe shopkeep thanks you for your purchase and hands you a mega potion" << endl;
            Sleep(1500);
            GeneralStore();
        }
        if (inputmpot == "2") {
            if (Gold < 350) {
                cout << "\nYou don't have enough gold for that!" << endl;
                Sleep(1200);
                GeneralStore();
            }
            MegaPotions = MegaPotions + 5;
            Gold = Gold - 350;
            cout << "\nThe shopkeep thanks you for your purchase and hands you 5 mega potions" << endl;
            Sleep(1500);
            GeneralStore();
        }
        if (inputmpot == "3") {
            GeneralStore();
        }
    }
    if (input1 == "4") {
        InTown();
    }
}

void WeaponStore() {    // Weapon store

    string weaponname = "default";
    string weaponinput = "none";
    int cost{ 1 };
    int damage{ 1 };

    do {
        cout << "The Iron Sledge Weapon Shop" << endl;
        cout << "\nYou walk into the weapon shop and are met by an arsenal of weapons of all types - swords, axes, " << endl;
        cout << "hammers, spears, whips, everything a gladiator or adventurer would need. You walk over to the sword" << endl;
        cout << "section, your weapon type of choice, and you start perusing the shelves. The gruff shopkeeper gives" << endl;
        cout << "you a nod and asks if he can help you." << endl << endl;
        cout << "What weapon do you want to look at?" << endl;
        cout << "1. Dagger" << endl;
        cout << "2. Machete" << endl;
        cout << "3. Gladius" << endl;
        cout << "4. Sabre" << endl;
        cout << "5. Longsword" << endl;
        cout << "6. Broadsword" << endl;
        cout << "7. Claymore" << endl;
        cout << "8. Never mind..." << endl << endl;
        cout << "Input your choice: ";
        getline(cin, weaponinput);
    } while (weaponinput != "1" && weaponinput != "2" && weaponinput != "3" && weaponinput != "4" && weaponinput != "5" && weaponinput != "6" && weaponinput != "7" && weaponinput != "8"); {}

    if (weaponinput == "1") {
        weaponname = "Dagger";
        cost = 22;
        damage = 3;
    }
    if (weaponinput == "2") {
        weaponname = "Machete";
        cost = 35;
        damage = 5;
    }
    if (weaponinput == "3") {
        weaponname = "Gladius";
        cost = 50;
        damage = 8;
    }
    if (weaponinput == "4") {
        weaponname = "Sabre";
        cost = 70;
        damage = 10;
    }
    if (weaponinput == "5") {
        weaponname = "Longsword";
        cost = 88;
        damage = 13;
    }
    if (weaponinput == "6") {
        weaponname = "Broadsword";
        cost = 102;
        damage = 18;
    }
    if (weaponinput == "7") {
        weaponname = "Claymore";
        cost = 135;
        damage = 24;
    }
    if (weaponinput == "8") {
        InTown();
    }
    string weaponinput1 = "No";
    do {
        cout << "\nThe " << weaponname << " costs " << cost << " gold, doing " << damage << " weapon damage." << endl << endl;
        cout << "Would you like to buy it? You have " << Gold << " gold." << endl;
        cout << "1. Buy it" << endl;
        cout << "2. Hold off for now" << endl << endl;
        cout << "Input your choice: ";
        getline(cin, weaponinput1);
    } while (weaponinput1 != "1" && weaponinput1 != "2"); {}
    if (weaponinput1 == "1") {
        if (Gold < cost) {
            cout << "\nYou're a little short on gold... The shop keep asks if you would like to look at any other weapons..." << endl;
            Sleep(1500);
            WeaponStore();
        }
        if (WeaponAttack >= damage) {
            cout << "\nYou realize this weapon wouldn't be an improvement over your current weapon and opt to look at something else..." << endl;
            Sleep(1500);
            WeaponStore();
        }
        WeaponType = weaponname;
        Gold = Gold - cost;
        WeaponAttack = damage;

        cout << "\nThe shop keep hands you your new " << weaponname << " and thanks you for your business." << endl << endl;
        Sleep(1500);
        InTown();

    }
    if (weaponinput1 == "2") {
        WeaponStore();
    }
}

void ArmorStore() {    // Armor store

    string armorname = "default";
    string armorinput = "none";
    int cost{ 1 };
    int armor{ 1 };

    do {
        cout << "\nThe Althane Armory" << endl;
        cout << "\nYou wander into the local armory and are met by a wide variety of armor types - everything from " << endl;
        cout << "standard studded leather to full steel platemail can be found here. Breastplates, gloves, sabatons," << endl;
        cout << "everything an adventurer or gladiator would need to protect themselves. The smiling shopkeeper gives" << endl;
        cout << "you wave as he approaches you, asking if there is something in particular you're looking for." << endl << endl;
        cout << "What armor do you want to look at?" << endl;
        cout << "1. Leather" << endl;
        cout << "2. Studded" << endl;
        cout << "3. Chainmail" << endl;
        cout << "4. Bronze" << endl;
        cout << "5. Iron" << endl;
        cout << "6. Steel" << endl;
        cout << "7. Adamantite" << endl;
        cout << "8. Never mind..." << endl << endl;
        cout << "Input your choice: ";
        getline(cin, armorinput);
    } while (armorinput != "1" && armorinput != "2" && armorinput != "3" && armorinput != "4" && armorinput != "5" && armorinput != "6" && armorinput != "7" && armorinput != "8"); {}

    if (armorinput == "1") {
        armorname = "Leather";
        cost = 34;
        armor = 2;
    }
    if (armorinput == "2") {
        armorname = "Studded";
        cost = 52;
        armor = 4;
    }
    if (armorinput == "3") {
        armorname = "Chainmail";
        cost = 84;
        armor = 6;
    }
    if (armorinput == "4") {
        armorname = "Bronze";
        cost = 106;
        armor = 8;
    }
    if (armorinput == "5") {
        armorname = "Iron";
        cost = 142;
        armor = 11;
    }
    if (armorinput == "6") {
        armorname = "Steel";
        cost = 190;
        armor = 15;
    }
    if (armorinput == "7") {
        armorname = "Adamantite";
        cost = 245;
        armor = 22;
    }
    if (armorinput == "8") {
        InTown();
    }
    string armorinput1 = "No";
    do {
        cout << "\nThe " << armorname << " armor costs " << cost << " gold, protecting against " << armor << " points of damage." << endl << endl;
        cout << "Would you like to buy it? You have " << Gold << " gold." << endl;
        cout << "1. Buy it" << endl;
        cout << "2. Hold off for now" << endl << endl;
        cout << "Input your choice: ";
        getline(cin, armorinput1);
    } while (armorinput1 != "1" && armorinput1 != "2"); {}
    if (armorinput1 == "1") {
        if (Gold < cost) {
            cout << "\nYou're a little short on gold... The shop keep asks if you would like to look at other armor pieces..." << endl;
            Sleep(1500);
            ArmorStore();
        }
        if (ArmorDefense >= armor) {
            cout << "\nYou realize this armor wouldn't be an improvement over your current armor and opt to look at something else..." << endl;
            Sleep(1500);
            ArmorStore();
        }
        ArmorType = armorname;
        Gold = Gold - cost;
        ArmorDefense = armor;
        cout << "\nThe shop keep hands you your new " << armorname << " armor and thanks you for your business." << endl << endl;
        Sleep(1500);
        InTown();
    }
    if (armorinput1 == "2") {
        ArmorStore();
    }
}

void Arena() { // Arena setup


    string arenainput1 = "nothing";

    do {
        cout << "\nThe Gladiator Arena" << endl << endl;
        cout << "Walking through the stone archways of the gladiator arena, you can hear the roars of the crowds,  people" << endl;
        cout << "betting on the fights, gladiators and those testing their strength struggling in a fight to the death. You " << endl;
        cout << "approach a booth at the entrance of the arena, two workers there greet you, asking if you would like to" << endl;
        cout << "compete in the arena, giving you a list of available monsters to fight, as well as gladiators that " << endl;
        cout << "you can challenge, with the least challenging at the top of the list - you should start there." << endl << endl;
        cout << "What is your next move?" << endl;
        cout << "1. Fight monsters" << endl;
        cout << "2. Challenge a gladiator" << endl;
        cout << "3. Never mind..." << endl << endl;
        cout << "Input your choice: ";
        getline(cin, arenainput1);
    } while (arenainput1 != "1" && arenainput1 != "2" && arenainput1 != "3"); {}

    if (arenainput1 == "1") {
        MonsterSetup();
    }
    if (arenainput1 == "2") {
        cout << "\nNot implemented yet" << endl;
        GladiatorFight = 1;
        InTown();
    }
    if (arenainput1 == "3") {
        InTown();
    }


}

void MonsterSetup() {
        // fighting monsters
        string arenainput2 = "nothing";
        GladiatorFight = 0;
        do {
            cout << "\nThe person working the counter slides you over a list of monsters to battle..." << endl << endl;
            cout << "What will you face in the arena?" << endl;
            cout << "1. Small fox" << endl;
            cout << "2. Enormous rat" << endl;
            cout << "3. Angry boar" << endl;
            cout << "4. Small black bear" << endl;
            cout << "5. Nevermind...." << endl << endl;
            cout << "Input your choice: ";
            getline(cin, arenainput2);
        } while (arenainput2 != "1" && arenainput2 != "2" && arenainput2 != "3" && arenainput2 != "4" && arenainput2 !="5"); {}
        if (arenainput2 == "1") {
            FoxEnemy();
        }
        else if (arenainput2 == "2") {
            RatEnemy();
        }
        else if (arenainput2 == "3") {
            BoarEnemy();
        }
        else if (arenainput2 == "4") {
            BlackBearEnemy();
        }
        else if (arenainput2 == "5") { //Update this call whenever you add new enemies
            Arena();
        }
    }


void CombatDecision() { // function determining if the player wants to fight the chosen enemy

    if (Level > EnemyLevelCap) {
        cout << endl << "The arena master tells you to fight something a little more suited to your skill level" << endl;
        Sleep(2000);
        Arena();
    }

    string arenainput3 = "no";
    do {
        cout << "\nYou have selected " << EnemyFirstName << " " << EnemyName << " to fight - they have " << EnemyHP << " HP and " << EnemyStr << " average attack." << endl << endl;
        cout << "Your HP " << HPCurrent << " / " << (HP + HPBonus) << endl << endl;
        cout << "Fight this opponent? You'll use up " << HungerUse << " hunger." << endl;
        cout << "1. Fight " << EnemyFirstName << " " << EnemyName << endl;
        cout << "2. Never mind...." << endl << endl;
        cout << "Input your choice: ";
        getline(cin, arenainput3);
    } while (arenainput3 != "1" && arenainput3 != "2"); {}
    if (arenainput3 == "1") {
        if (HungerCurrent < HungerUse) {
            cout << "\nYou're too hungry to fight " << EnemyFirstName << EnemyName << "!" << endl;
            Sleep(1500);
            Arena();
        }
        cout << "\nYou are ushered into the arena where " << EnemyFirstName << " " << EnemyName << " is waiting to face you..." << endl;
        Sleep(1500);
        PotionInt = 2;
        HungerCurrent = HungerCurrent - HungerUse;
        CombatSetup();
    }
    if (arenainput3 == "2") {
        Arena();
    }
}


void CombatSetup() {  // Combat setup menu

    cout << "\nThe Arena Pit" << endl << endl;
    cout << "You and " << EnemyFirstName << " " << EnemyName << " circle the arena pit, squaring off for the next attack!" << endl << endl;
    cout << Name << setw(15) << HPCurrent << " / " << (HP + HPBonus) << " HP" << endl << endl;
    if (GladiatorFight == 1) {
        cout << EnemyFirstName;
    }
    cout << EnemyName << setw(15) << EnemyHPCurrent << " / " << EnemyHP << " HP" << endl << endl;
    string combatinput = "no";
    do {
        cout << "What is your next move?" << endl;
        cout << "1. Swing your " << WeaponType << "!" << endl;
        cout << "2. Use a skill!" << endl;
        cout << "3. Consume a potion!" << endl << endl;
        cout << "Input your choice: ";
        getline(cin, combatinput);
    } while (combatinput != "1" && combatinput != "2" && combatinput != "3"); {}
    if (combatinput == "1") {
        SkillNumber = 0;
        PlayerAttack();
    }
    if (combatinput == "2") {
        SkillMenu();
    }
    if (combatinput == "3") {
        if ((HP + HPBonus) == HPCurrent) {
            cout << "\nYou don't need a potion!" << endl;
            Sleep(1500);
            CombatSetup();
        }
        if ((HP + HPBonus) != HPCurrent) {
            CampPotion();
        }
    }
}

void SkillMenu() { // Skill menu for combat  FINISH THIS

    string skillinput = "dork";
    do {
        cout << "\nWhich skill do you want to use?" << endl << endl;
        cout << "SP   " << SPCurrent << " / " << (SP + SPBonus) << endl;
        cout << "1. " << Skill1 << " (3 SP)" << endl;
        cout << "2. " << Skill2 << " (4 SP)" << endl;
        cout << "3. " << Skill4 << " (4 SP)" << endl;
        cout << "4. " << Skill5 << " (5 SP)" << endl;
        cout << "5. Never mind..." << endl << endl;
        cout << "Input your choice: ";
        getline(cin, skillinput);
    } while (skillinput != "1" && skillinput != "2" && skillinput != "3" && skillinput != "4" && skillinput != "5"); {}
    if (skillinput == "1") {
        if (SPCurrent < 3) {
            cout << "\nYou don't have enough SP!" << endl;
            Sleep(1500);
            SkillMenu();
        }
        SkillNumber = 1;
        SPCurrent = SPCurrent - 3;
        PlayerAttack();
    }
    if (skillinput == "2") {
        if (Level < 5) {
            cout << "\nYou haven't learned this skill yet!" << endl;
            Sleep(1500);
            SkillMenu();
        }
        if (SPCurrent < 4) {
            cout << "\nYou don't have enough SP!" << endl;
            Sleep(1500);
            SkillMenu();
        }
        SkillNumber = 2;
        SPCurrent = SPCurrent - 4;
        PlayerAttack();
    }
    if (skillinput == "3") {
        if (Level < 13) {
            cout << "\nYou haven't learned this skill yet!" << endl;
            Sleep(1500);
            SkillMenu();
        }
        if (SPCurrent < 4) {
            cout << "\nYou don't have enough SP!" << endl;
            Sleep(1500);
            SkillMenu();
        }
        SkillNumber = 3;
        SPCurrent = SPCurrent - 4;
        PlayerAttack();
    }
    if (skillinput == "4") {
        if (Level < 17) {
            cout << "\nYou haven't learned this skill yet!" << endl;
            Sleep(1500);
            SkillMenu();
        }
        if (SPCurrent < 5) {
            cout << "\nYou don't have enough SP!" << endl;
            Sleep(1500);
            SkillMenu();
        }
        SkillNumber = 4;
        SPCurrent = SPCurrent - 5;
        PlayerAttack();
    }
    if (skillinput == "5") {
        CombatSetup();
    }
}

void PlayerAttack() { // player attack phase - skill number 3 = headbutt, 4  = thrust
    int damage{ 1 };
    int randomizer{ 1 };
    srand(time(NULL));
    randomizer = (rand() % 2);
    if (randomizer == 0) {
        int minusdamage{ 1 };
        srand(time(NULL));
        minusdamage = ((rand() % 3) + 1);
        damage = ((Strength + WeaponAttack + STRBonus) - minusdamage);
    }
    else if (randomizer == 1) {
        int plusdamage{ 1 };

        srand(time(NULL));
        plusdamage = ((rand() % 3) + 1);
        damage = ((Strength + WeaponAttack + STRBonus) + plusdamage);
    }
    if (SkillNumber == 0) {  //regular attack
        int randomizersk0{ 1 };
        srand(time(NULL));
        randomizersk0 = (rand() % (EnemyDodgeChance + ACCBonus));
        if (randomizersk0 == 0) {
            cout << "\nYou swing your " << WeaponType << " .... but miss!" << endl;
            Sleep(1000);
        }
        else {
            cout << "\nYou swing your " << WeaponType << " and deal " << damage << " damage!" << endl;
            Sleep(1000);
            EnemyHPCurrent = EnemyHPCurrent - damage;
        }
    }
    else if (SkillNumber == 1) {  // strike
        damage = ((damage * 1.50) + 5);
        cout << "\nYou strike " << EnemyFirstName << EnemyName << " hard with your " << WeaponType << " and deal " << damage << " damage!" << endl;
        Sleep(1000);
        EnemyHPCurrent = EnemyHPCurrent - damage;
        SkillNumber = 0;
    }
    else if (SkillNumber == 2) {  // quick jab
        damage = damage * .5;
        cout << "\nYou do a quick jab with your " << WeaponType << " and do " << damage << " damage!" << endl;
        cout << "You take a step back and get ready for a follow-up action!" << endl;
        SkillNumber = 0;
        Sleep(1500);
        EnemyHPCurrent = EnemyHPCurrent - damage;
        if (BleedTimer < 2 && BleedOn == 1) { // ENDING BLEED TIMER
            cout << endl << EnemyFirstName << EnemyName << " stops bleeding!" << endl;
            BleedTimer = 0;
            BleedOn = 0;
            Sleep(1500);
        }
        if (BleedTimer > 1 && BleedOn == 1) { // BLEED TIMER
            int bleedamount{ 1 };
            int bleedrando{ 1 };
            srand(time(NULL));
            bleedrando = ((rand() % 2) + 3);
            bleedamount = ((EnemyHP * .08) + bleedrando);
            cout << endl << EnemyFirstName << EnemyName << " bleeds for " << bleedamount << " damage!" << endl;
            EnemyHPCurrent = EnemyHPCurrent - bleedamount;
            BleedTimer = BleedTimer - 1;
            cout << "\nBleed time = " << BleedTimer;
            Sleep(1500);
        }
        if (EnemyHPCurrent < 1) {
            Victory();
        }
        CombatSetup();
    }
    else if (SkillNumber == 3) {  // headbutt
        damage = damage - WeaponAttack;
        cout << "\nYou violently headbutt " << EnemyFirstName << EnemyName << ", dazing them in the process and dealing " << damage << " damage!" << endl;
        SkillNumber = 0;
        EnemyHPCurrent = EnemyHPCurrent - damage;
        srand(time(NULL));
        DazeTimer = ((rand() % 2) + 3);
        Sleep(1500);
    }
    else if (SkillNumber == 4) { //thrust bleed damage
        cout << "\nYou thrust your " << WeaponType << " into " << EnemyFirstName << EnemyName << " causing " << damage << " damage!" << endl;
        Sleep(1000);
        cout << endl << EnemyFirstName << EnemyName << " is bleeding!" << endl;
        Sleep(1500);
        EnemyHPCurrent = EnemyHPCurrent - damage;
        srand(time(NULL));
        BleedTimer = ((rand() % 3) + 2);
        BleedOn = 1;
    }

    if (BleedTimer > 1 && BleedOn == 1) { // BLEED TIMER
        int bleedamount{ 1 };
        int bleedrando{ 1 };
        srand(time(NULL));
        bleedrando = ((rand() % 2) + 3);
        bleedamount = ((EnemyHP * .08) + bleedrando);
        cout << endl << EnemyFirstName << EnemyName << " bleeds for " << bleedamount << " damage!" << endl;
        EnemyHPCurrent = EnemyHPCurrent - bleedamount;
        BleedTimer = BleedTimer - 1;
        Sleep(1500);
    }

    if (EnemyHPCurrent < 1) {
        Victory();
    }
    if (BleedTimer < 2 && BleedOn == 1) { // ENDING BLEED TIMER
        cout << endl << EnemyFirstName << EnemyName << " stops bleeding!" << endl;
        BleedTimer = 0;
        BleedOn = 0;
    }
    if (EnemyHPCurrent > 0) {
        EnemyAttack();
    }
}

void EnemyAttack() { // enemy attack phase
    if (DazeTimer == 1) {
        cout << endl << EnemyFirstName << " " << EnemyName << " is no longer dazed!" << endl;
        DazeTimer = DazeTimer - 1;
        Sleep(1500);
    }
    if (DazeTimer > 1) {
        DazeTimer = DazeTimer - 1;
        int dazerando{ 0 };
        srand(time(NULL));
        dazerando = (rand() % 2);
        if (dazerando == 1) {
            cout << endl << EnemyFirstName << " " << EnemyName << " is still dazed... but manages to attack!" << endl;
            Sleep(1500);
        }
        if (dazerando == 0) {
            cout << endl << EnemyFirstName << " " << EnemyName << " is too dazed to attack!" << endl;
            Sleep(1500);
            CombatSetup();
        }
    }
    int damage{ 1 };
    int damagetotal{ 1 };
    int randomizer{ 1 };
    int missrandomizer{ 1 };
    int dodgecalculator{ 0 };
    dodgecalculator = Dodge + DodgeBonus;
    if (EnemyMissChance < dodgecalculator) {
        EnemyMiss();
    }
    srand(time(NULL));
    missrandomizer = (rand() % (EnemyMissChance - dodgecalculator));
    if (missrandomizer == 0) {
        EnemyMiss();
    }

    srand(time(NULL));
    randomizer = (rand() % 2);

    if (randomizer == 0) {
        int minusdamage{ 1 };
        srand(time(NULL));
        minusdamage = ((rand() % 2) + 1);
        damage = ((Defense + ArmorDefense + DEFBonus) - minusdamage);
        damagetotal = EnemyStr - damage;
    }
    else if (randomizer == 1) {
        int plusdamage{ 1 };
        srand(time(NULL));
        plusdamage = ((rand() % 2) + 1);
        damage = ((Defense + ArmorDefense + DEFBonus) + plusdamage);
        damagetotal = EnemyStr - damage;
    }
    if (damagetotal < 3) {
        int randomizer1{ 1 };
        srand(time(NULL));
        randomizer1 = ((rand() % 2) + 1);
        cout << endl << EnemyFirstName << " " << EnemyName << " barely scratches you with their " << EnemyWeapon << " and does " << randomizer1 << " damage!" << endl;
        HPCurrent = HPCurrent - randomizer1;
        Sleep(1000);
    }
    else if (damagetotal > 2) {
        cout << endl << EnemyFirstName << " " << EnemyName << " attacks you with their " << EnemyWeapon << " and deals " << damagetotal << " damage!" << endl;
        HPCurrent = HPCurrent - damagetotal;
        Sleep(1000);
    }
    if ((HP + HPBonus) < 1) {
        Defeat();
    }
    else if ((HP + HPBonus) > 0) {
        CombatSetup();
    }
}

void EnemyMiss() {

    cout << endl << EnemyFirstName << " " << EnemyName << " attacks and misses!" << endl;
        Sleep(1500);
        CombatSetup();
}

void Victory() { // Victory!
    cout << endl << "You defeated " << EnemyFirstName << " " << EnemyName << "!" << endl << endl;
    Sleep(1500);
    PotionInt = 1;
    DazeTimer = 0;
    SkillNumber = 0;
    BleedOn = 0;
    BleedTimer = 0;
    cout << "You earned:" << endl;
    cout << EnemyGold << " gold" << endl;
    cout << EnemyEXP << " EXP" << endl;
    Gold = Gold + EnemyGold;
    Exp = Exp + EnemyEXP;

    if (Exp >= ExpNextLevel) {
        Sleep(1500);
        LevelUp();
    }
    if (Exp < ExpNextLevel) {
        Sleep(1500);
        Arena();
    }
}

void Defeat() { // Defeat....
    cout << endl << "You gave it your best shot, but in the end, " << EnemyFirstName << " " << EnemyName << " was too much for you to handle";
    Sleep(1000);
    cout << ".";
    Sleep(1000);
    cout << ".";
    Sleep(1000);
    cout << "." << endl << endl << endl;
    Sleep(5000);
    PotionInt = 1;
    DazeTimer = 0;
    BleedTimer = 0;
    BleedOn = 0;
    main();
}