#include <iostream>
#include <string>
#include "classes.h"
#include "externs.h"
#include "functions.h"
using namespace std;


void AccEquipName() {
	if (Acc0 == 0) {
		cout << "none equipped" << endl << endl;
	}
	else if (Acc0 == 1) {
		cout << "Soul of the Warrior (+HP, +Str, +Def)" << endl << endl;
	}
	else if (Acc0 == 2) {
		cout << "Soul of the Barbarian (++HP, ++Str)" << endl << endl;
	}
	else if (Acc0 == 3) {
		cout << "Soul of the Ninja (++Accuracy, ++Dodge)" << endl << endl;
	}
	else if (Acc0 == 4) {
		cout << "Soul of the Swashbuckler (+Str, +Accuracy, +Dodge)" << endl << endl;
	}
	else if (Acc0 == 5) {
		cout << "Soul of the Hunter (+SP, ++Accuracy)" << endl << endl;
	}
	else if (Acc0 == 6) {
		cout << "Soul of the Champion (+HP, ++Def, +SP)" << endl << endl;
	}
	else if (Acc0 == 7) {
		cout << "Soul of the Assassin (+SP, +Accuracy, +Dodge)" << endl << endl;
	}
	else if (Acc0 == 8) {
		cout << "Soul of the Crusader (+HP, +Str, +SP)" << endl << endl;
	}
	else if (Acc0 == 9) {
		cout << "Soul of the Cleric (++Def, ++SP)" << endl << endl;
	}
}

void AccEquip() {
	string input1 = "nothing";
	cout << "\nSelect the accessory to equip:" << endl << endl;

	if (Acc1 == 0) {
		cout << "1. Not acquired" << endl;
	}
	else if (Acc1 == 1) {
		cout << "1. Soul of the Warrior (+HP, +Str, +Def)" << endl;
	}
	if (Acc2 == 0) {
		cout << "2. Not acquired" << endl;
	}
	else if (Acc2 == 1) {
		cout << "2. Soul of the Barbarian (++HP, ++Str)" << endl;
	}
	if (Acc3 == 0) {
		cout << "3. Not acquired" << endl;
	}
	else if (Acc3 == 1) {
		cout << "3. Soul of the Ninja (++Accuracy, ++Dodge)" << endl;
	}
	if (Acc4 == 0) {
		cout << "4. Not acquired" << endl;
	}
	else if (Acc4 == 1) {
		cout << "4. Soul of the Swashbuckler (+Str, +Accuracy, +Dodge)" << endl;
	}
	if (Acc5 == 0) {
		cout << "5. Not acquired" << endl;
	}
	else if (Acc5 == 1) {
		cout << "5. Soul of the Hunter (+SP, ++Accuracy)" << endl;
	}
	if (Acc6 == 0) {
		cout << "6. Not acquired" << endl;
	}
	else if (Acc6 == 1) {
		cout << "6. Soul of the Champion (+HP, ++Def, +SP)" << endl;
	}
	if (Acc7 == 0) {
		cout << "7. Not acquired" << endl;
	}
	else if (Acc7 == 1) {
		cout << "7. Soul of the Assassin (+SP, +Accuracy, +Dodge)" << endl;
	}
	if (Acc8 == 0) {
		cout << "8. Not acquired" << endl;
	}
	else if (Acc8 == 1) {
		cout << "8. Soul of the Crusader (+HP, +Str, +SP)" << endl;
	}
	if (Acc9 == 0) {
		cout << "9. Not acquired" << endl;
	}
	else if (Acc9 == 1) {
		cout << "9. Soul of the Cleric (++Def, ++SP)" << endl;
	}
	cout << "10. Return to camp menu" << endl << endl;
	do {
		cout << "Input your choice: ";
			getline(cin, input1);
	} while (input1 != "1" && input1 != "2" && input1 != "3" && input1 != "4" && input1 != "5" && input1 != "6" && input1 != "7" && input1 != "8" && input1 != "9" && input1 != "10"); {}
	
	if (input1 == "1") {
		if (Acc1 == 0) {
			cout << "\nYou don't own that yet!" << endl;
			Sleep(1500);
			AccEquip();
		}
		else if (Acc1 == 1) {
			cout << "\You equip the Soul of the Warrior" << endl;
			Acc0 = 1;
			HPBonus = 5;
			STRBonus = 3;
			DEFBonus = 3;
			SPBonus = 0;
			ACCBonus = 0;
			DodgeBonus = 0;
			Sleep(1500);
			if (HPCurrent > (HP + HPBonus)) {
				HPCurrent = (HP + HPBonus);
			}
			if (SPCurrent > (SP + SPBonus)) {
				SPCurrent = (SP + SPBonus);
			}
				Camp();
		}
	}
	if (input1 == "2") {
		if (Acc2 == 0) {
			cout << "\nYou don't own that yet!" << endl;
			Sleep(1500);
			AccEquip();
		}
		else if (Acc2 == 1) {
			cout << "\You equip the Soul of the Barbarian" << endl;
			Acc0 = 2;
			HPBonus = 10;
			STRBonus = 5;
			DEFBonus = 0;
			SPBonus = 0;
			ACCBonus = 0;
			DodgeBonus = 0;
			Sleep(1500);
			if (HPCurrent > (HP + HPBonus)) {
				HPCurrent = (HP + HPBonus);
			}
			if (SPCurrent > (SP + SPBonus)) {
				SPCurrent = (SP + SPBonus);
			}
			Camp();
		}
	}
	if (input1 == "3") {
		if (Acc3 == 0) {
			cout << "\nYou don't own that yet!" << endl;
			Sleep(1500);
			AccEquip();
		}
		else if (Acc3 == 1) {
			cout << "\You equip the Soul of the Ninja" << endl;
			Acc0 = 3;
			HPBonus = 0;
			STRBonus = 0;
			DEFBonus = 0;
			SPBonus = 0;
			ACCBonus = 4;
			DodgeBonus = 4;
			Sleep(1500);
			if (HPCurrent > (HP + HPBonus)) {
				HPCurrent = (HP + HPBonus);
			}
			if (SPCurrent > (SP + SPBonus)) {
				SPCurrent = (SP + SPBonus);
			}
			Camp();
		}
	}
	if (input1 == "4") {
		if (Acc4 == 0) {
			cout << "\nYou don't own that yet!" << endl;
			Sleep(1500);
			AccEquip();
		}
		else if (Acc4 == 1) {
			cout << "\You equip the Soul of the Swashbuckler" << endl;
			Acc0 = 4;
			HPBonus = 0;
			STRBonus = 3;
			DEFBonus = 0;
			SPBonus = 0;
			ACCBonus = 2;
			DodgeBonus = 2;
			Sleep(1500);
			if (HPCurrent > (HP + HPBonus)) {
				HPCurrent = (HP + HPBonus);
			}
			if (SPCurrent > (SP + SPBonus)) {
				SPCurrent = (SP + SPBonus);
			}
			Camp();
		}
	}
	if (input1 == "5") {
		if (Acc5 == 0) {
			cout << "\nYou don't own that yet!" << endl;
			Sleep(1500);
			AccEquip();
		}
		else if (Acc5 == 1) {
			cout << "\You equip the Soul of the Hunter" << endl;
			Acc0 = 5;
			HPBonus = 0;
			STRBonus = 0;
			DEFBonus = 0;
			SPBonus = 3;
			ACCBonus = 4;
			DodgeBonus = 0;
			Sleep(1500);
			if (HPCurrent > (HP + HPBonus)) {
				HPCurrent = (HP + HPBonus);
			}
			if (SPCurrent > (SP + SPBonus)) {
				SPCurrent = (SP + SPBonus);
			}
			Camp();
		}
	}
	if (input1 == "6") {
		if (Acc6 == 0) {
			cout << "\nYou don't own that yet!" << endl;
			Sleep(1500);
			AccEquip();
		}
		else if (Acc6 == 1) {
			cout << "\You equip the Soul of the Champion" << endl;
			Acc0 = 6;
			HPBonus = 5;
			STRBonus = 0;
			DEFBonus = 5;
			SPBonus = 3;
			ACCBonus = 0;
			DodgeBonus = 0;
			Sleep(1500);
			if (HPCurrent > (HP + HPBonus)) {
				HPCurrent = (HP + HPBonus);
			}
			if (SPCurrent > (SP + SPBonus)) {
				SPCurrent = (SP + SPBonus);
			}
			Camp();
		}
	}
	if (input1 == "7") {
		if (Acc7 == 0) {
			cout << "\nYou don't own that yet!" << endl;
			Sleep(1500);
			AccEquip();
		}
		else if (Acc7 == 1) {
			cout << "\You equip the Soul of the Assassin" << endl;
			Acc0 = 7;
			HPBonus = 0;
			STRBonus = 0;
			DEFBonus = 0;
			SPBonus = 3;
			ACCBonus = 2;
			DodgeBonus = 2;
			Sleep(1500);
			if (HPCurrent > (HP + HPBonus)) {
				HPCurrent = (HP + HPBonus);
			}
			if (SPCurrent > (SP + SPBonus)) {
				SPCurrent = (SP + SPBonus);
			}
			Camp();
		}
	}
	if (input1 == "8") {
		if (Acc8 == 0) {
			cout << "\nYou don't own that yet!" << endl;
			Sleep(1500);
			AccEquip();
		}
		else if (Acc8 == 1) {
			cout << "\You equip the Soul of the Crusader" << endl;
			Acc0 = 8;
			HPBonus = 5;
			STRBonus = 3;
			DEFBonus = 0;
			SPBonus = 3;
			ACCBonus = 0;
			DodgeBonus = 0;
			Sleep(1500);
			if (HPCurrent > (HP + HPBonus)) {
				HPCurrent = (HP + HPBonus);
			}
			if (SPCurrent > (SP + SPBonus)) {
				SPCurrent = (SP + SPBonus);
			}
			Camp();
		}
	}
	if (input1 == "9") {
		if (Acc9 == 0) {
			cout << "\nYou don't own that yet!" << endl;
			Sleep(1500);
			AccEquip();
		}
		else if (Acc9 == 1) {
			cout << "\You equip the Soul of the Cleric" << endl;
			Acc0 = 9;
			HPBonus = 0;
			STRBonus = 0;
			DEFBonus = 5;
			SPBonus = 5;
			ACCBonus = 0;
			DodgeBonus = 0;
			Sleep(1500);
			if (HPCurrent > (HP + HPBonus)) {
				HPCurrent = (HP + HPBonus);
			}
			if (SPCurrent > (SP + SPBonus)) {
				SPCurrent = (SP + SPBonus);
			}
			Camp();
		}
	}
	if (input1 == "10") {
		Camp();
	}
}