#include <iostream>
#include <string>
#include "classes.h"
#include "externs.h"
#include "functions.h"
using namespace std;



void AccessoryStore() {
	string input1 = "nothing";
	cout << endl << "\nYou step into the accessory store and are met by a number of intricate glass display cases." << endl;
	cout << "The shop keeper approaches you - he is well dressed, and looks... human... for the most part." << endl;
	cout << "'What is it you're looking for?' he asks 'I magically imbue every accessory sold - each is 50 gold.'" << endl << endl;
	do {
		cout << "Which accessory would you like to purchase? You have " << Gold << " gold." << endl;
		cout << "1. Soul of the Warrior (+HP, +Str, +Def)" << endl;
		cout << "2. Soul of the Barbarian (++HP, ++Str)" << endl;
		cout << "3. Soul of the Ninja (++Accuracy, ++Dodge)" << endl;
		cout << "4. Soul of the Swashbuckler (+Str, +Accuracy, +Dodge)" << endl;
		cout << "5. Soul of the Hunter (+SP, ++Accuracy)" << endl;
		cout << "6. Soul of the Champion (+HP, ++Def, +SP)" << endl;
		cout << "7. Soul of the Assassin (+SP, +Accuracy, +Dodge)" << endl;
		cout << "8. Soul of the Crusader (+HP, +Str, +SP)" << endl;
		cout << "9. Soul of the Cleric (++Def, ++SP)" << endl;
		cout << "10. Never mind..." << endl;
		cout << "\nInput your choice: ";
		getline(cin, input1);
	} while (input1 != "1" && input1 != "2" && input1 != "3" && input1 != "4" && input1 != "5" && input1 != "6" && input1 != "7" && input1 != "8" && input1 != "9" && input1 != "10"); {}

	if (input1 == "1") {
		if (Acc1 == 1) {
			cout << "\nYou already own this accessory! The shopkeeper refuses to sell another..." << endl;
			Sleep(1500);
			InTown();
		}
		if (Gold < 50) {
			cout << "\nYou don't have enough gold! The shopkeeper ushers you out of the store..." << endl;
			Sleep(1500);
			InTown();
		}
		if (Gold > 49) {
			cout << "\nThe shopkeeper thanks you and hands you the Soul of the Warrior accessory" << endl;
			Acc1 = 1;
			Gold = Gold - 50;
			Sleep(1500);
			InTown();
		}
	}
	else if (input1 == "2") {
		if (Acc2 == 1) {
			cout << "\nYou already own this accessory! The shopkeeper refuses to sell another..." << endl;
			Sleep(1500);
			InTown();
		}
		if (Gold < 50) {
			cout << "\nYou don't have enough gold! The shopkeeper ushers you out of the store..." << endl;
			Sleep(1500);
			InTown();
		}
		if (Gold > 49) {
			cout << "\nThe shopkeeper thanks you and hands you the Soul of the Barbarian accessory" << endl;
			Acc2 = 1;
			Gold = Gold - 50;
			Sleep(1500);
			InTown();
		}
	}
	else if (input1 == "3") {
		if (Acc3 == 1) {
			cout << "\nYou already own this accessory! The shopkeeper refuses to sell another..." << endl;
			Sleep(1500);
			InTown();
		}
		if (Gold < 50) {
			cout << "\nYou don't have enough gold! The shopkeeper ushers you out of the store..." << endl;
			Sleep(1500);
			InTown();
		}
		if (Gold > 49) {
			cout << "\nThe shopkeeper thanks you and hands you the Soul of the Ninja accessory" << endl;
			Acc3 = 1;
			Gold = Gold - 50;
			Sleep(1500);
			InTown();
		}
	}
	else if (input1 == "4") {
		if (Acc4 == 1) {
			cout << "\nYou already own this accessory! The shopkeeper refuses to sell another..." << endl;
			Sleep(1500);
			InTown();
		}
		if (Gold < 50) {
			cout << "\nYou don't have enough gold! The shopkeeper ushers you out of the store..." << endl;
			Sleep(1500);
			InTown();
		}
		if (Gold > 49) {
			cout << "\nThe shopkeeper thanks you and hands you the Soul of the Swashbuckler accessory" << endl;
			Acc4= 1;
			Gold = Gold - 50;
			Sleep(1500);
			InTown();
		}
	}
	else if (input1 == "5") {
		if (Acc5 == 1) {
			cout << "\nYou already own this accessory! The shopkeeper refuses to sell another..." << endl;
			Sleep(1500);
			InTown();
		}
		if (Gold < 50) {
			cout << "\nYou don't have enough gold! The shopkeeper ushers you out of the store..." << endl;
			Sleep(1500);
			InTown();
		}
		if (Gold > 49) {
			cout << "\nThe shopkeeper thanks you and hands you the Soul of the Hunter accessory" << endl;
			Acc5 = 1;
			Gold = Gold - 50;
			Sleep(1500);
			InTown();
		}
	}
	else if (input1 == "6") {
		if (Acc6 == 1) {
			cout << "\nYou already own this accessory! The shopkeeper refuses to sell another..." << endl;
			Sleep(1500);
			InTown();
		}
		if (Gold < 50) {
			cout << "\nYou don't have enough gold! The shopkeeper ushers you out of the store..." << endl;
			Sleep(1500);
			InTown();
		}
		if (Gold > 49) {
			cout << "\nThe shopkeeper thanks you and hands you the Soul of the Champion accessory" << endl;
			Acc6 = 1;
			Gold = Gold - 50;
			Sleep(1500);
			InTown();
		}
	}
	else if (input1 == "7") {
		if (Acc7 == 1) {
			cout << "\nYou already own this accessory! The shopkeeper refuses to sell another..." << endl;
			Sleep(1500);
			InTown();
		}
		if (Gold < 50) {
			cout << "\nYou don't have enough gold! The shopkeeper ushers you out of the store..." << endl;
			Sleep(1500);
			InTown();
		}
		if (Gold > 49) {
			cout << "\nThe shopkeeper thanks you and hands you the Soul of the Assassin accessory" << endl;
			Acc7 = 1;
			Gold = Gold - 50;
			Sleep(1500);
			InTown();
		}
	}
	else if (input1 == "8") {
		if (Acc8 == 1) {
			cout << "\nYou already own this accessory! The shopkeeper refuses to sell another..." << endl;
			Sleep(1500);
			InTown();
		}
		if (Gold < 50) {
			cout << "\nYou don't have enough gold! The shopkeeper ushers you out of the store..." << endl;
			Sleep(1500);
			InTown();
		}
		if (Gold > 49) {
			cout << "\nThe shopkeeper thanks you and hands you the Soul of the Crusader accessory" << endl;
			Acc8 = 1;
			Gold = Gold - 50;
			Sleep(1500);
			InTown();
		}
	}
	else if (input1 == "9") {
		if (Acc9 == 1) {
			cout << "\nYou already own this accessory! The shopkeeper refuses to sell another..." << endl;
			Sleep(1500);
			InTown();
		}
		if (Gold < 50) {
			cout << "\nYou don't have enough gold! The shopkeeper ushers you out of the store..." << endl;
			Sleep(1500);
			InTown();
		}
		if (Gold > 49) {
			cout << "\nThe shopkeeper thanks you and hands you the Soul of the Cleric accessory" << endl;
			Acc9 = 1;
			Gold = Gold - 50;
			Sleep(1500);
			InTown();
		}
	}
	else if (input1 == "10") {
		InTown();
	}
}