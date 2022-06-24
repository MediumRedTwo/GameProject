
using namespace std;

string Name = "Nothing";
string Race = "Nothing";
string WeaponType = "Fists";      // what the name of the weapon they're using is
string ArmorType = "Cloth";      // what the name of the armor they're using is
string AccessoryType = "None"; // name of the accessory you're wearing
string EnemyName = "Chubs"; //  name of whoever you're fighting so it can easily jump functions
string EnemyFirstName = "the"; // Such as the, john, whatever using to identify the enemy (a, the, steve, etc)
string EnemyWeapon = "chubs"; // what the enemy attack is, such as sword, bite, claws, horns, etc
string Skill1 = "Strike";
string Skill2 = "Unlearned";
string Skill3 = "Unlearned";
string Skill4 = "Unlearned";
string Skill5 = "Unlearned";
int Acc0{ 0 }; // this variable is just for which accessory, 1-9, is equipped
int Acc1{ 0 };
int Acc2{ 0 };
int Acc3{ 0 };
int Acc4{ 0 };
int Acc5{ 0 };
int Acc6{ 0 };
int Acc7{ 0 };
int Acc8{ 0 };
int Acc9{ 0 };
int RaceType{ 0 };
int HP{ 0 };
int HPCurrent{ 0 };
int Strength{ 0 };
int Defense{ 0 };
int Dodge{ 0 };
int Gold{ 0 };
int Potions{ 0 };
int MegaPotions{ 0 };
int WeaponAttack{ 1 };
int ArmorNumber{ 1 };    // all armor have a number assigned to them for determining if the new weapons are better or worse
int ArmorDefense{ 1 };
int WeaponNumber{ 1 };  // all weapons have a number assigned to them for determining if new weapons are better or worse
int Exp{ 0 };
int ExpNextLevel{ 20 };
int Level{ 1 };
int HungerMax{ 10 };
int HungerCurrent{ 10 };
int FoodOnHand{ 0 };
int SP{ 0 };
int SPCurrent{ 0 };
int HPBonus{ 0 };
int SPBonus{ 0 };
int STRBonus{ 0 };
int DEFBonus{ 0 };
int ACCBonus{ 0 };
int DodgeBonus{ 0 };
int GoldBonus{ 0 };
int ClassStrBonus{ 0 };
int ClassDefBonus{ 0 };
int ClassHPBonus{ 0 };
int ClassGoldBonus{ 0 };
int CurrentAccessory{ 0 }; //not sure if I need this one
int StatsLocation{ 1 };      // 1 = stats checks at the camp, 2 = stats checked in arena
int EnemyHP{ 1 };
int EnemyHPCurrent{ 1 };
int EnemyStr{ 1 };
int EnemyEXP{ 1 };
int EnemyGold{ 1 };
int EnemyLevelCap{ 1 };     // sets maximum level players can challenge this enemy
int EnemyMissChance{ 1 }; // miss chance
int EnemyDodgeChance{ 1 }; // chance the enemy will dodge the attack
int PotionInt{ 1 }; // Checks for this when wrapping up drinking a potion, 1= in camp, 2 = in the arena
int SkillNumber{ 0 }; // this is the attack check to see which skill is used, 0 = normal attack, 1 = skill 1, 2 = sk2, 3 = sk4, 4 = sk5
int DazeTimer{ 0 };
int BleedTimer{ 0 };
int BleedOn{ 0 }; // bleed 0 = no bleeding, bleed 1 = bleeding
int HungerUse{ 0 };
int GladiatorFight{ 0 };
int GladiatorRank{ 0 };
int StoryLocation{ 0 };
int StoryBattle{ 0 }; // determining whether you're in a story battle or not, 0 = no, 1 = yes
