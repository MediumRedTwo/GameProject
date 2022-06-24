#include "includes.h"
#include "externs.h"

using namespace std;


void NameRandomizer(string &tempname) {

    const string player_names[] = {
    "Thasgerd",
    "Ogrim",
    "Callen",
    "Lothaw",
    "Rahma",
    "Bruun",
    "Ulric",
    "Brittany",
    "Colin"
    "Cormic",
    "Guyin",
    "Vanket",
    "Jimmothy",
    "Maxen",
    "Timmel",
    "Fry",
    "Peter",
    "Omygerd",
    "Bragin",
    "Nate",
    "Arthais",
    "Russ",
    "Sharky",
    "Perd",
    "Tank",
    "Mona",
    "Sam"
    };

    int num_names = sizeof(player_names) / sizeof(string);
    tempname = player_names[rand() % num_names];
}

//if (nameout == 0) {
//    Name = "Thasgerd";
//}
//if (nameout == 1) {
//    Name = "Ogrim";
//}
//if (nameout == 2) {
//    Name = "Lothaw";
//}
//if (nameout == 3) {
//    Name = "Rahma";
//}
//if (nameout == 4) {
//    Name = "Bruun";
//}
//if (nameout == 5) {
//    Name = "Ulric";
//}
//if (nameout == 6) {
//    Name = "Cormic";
//}
//if (nameout == 7) {
//    Name = "Guyin";
//}
//if (nameout == 8) {
//    Name = "Vanket";
//}
//if (nameout == 9) {
//    Name = "Jimmothy";
//}
//if (nameout == 10) {
//    Name = "Leynch";
//}
//if (nameout == 11) {
//    Name = "Timmel";
//}
//if (nameout == 12) {
//    Name = "Maxen";
//}
//if (nameout == 13) {
//    Name = "Maccus";
//}
//if (nameout == 14) {
//    Name = "Yuuki";
//}
//if (nameout == 15) {
//    Name = "Chungus";
//}
//if (nameout == 16) {
//    Name = "Fry";
//}
//if (nameout == 17) {
//    Name = "Russ";
//}
//if (nameout == 18) {
//    Name = "Chubbs";
//}
//if (nameout == 19) {
//    Name = "Perd";
//}
//if (nameout == 20) {
//    Name = "Tank";
//}
//if (nameout == 21) {
//    Name = "Peter";
//}
//if (nameout == 22) {
//    Name = "Nate";
//}
//if (nameout == 23) {
//    Name = "Red";
//}
//if (nameout == 24) {
//    Name = "Mona";
//}
//if (nameout == 25) {
//    Name = "Sam";
//}
//if (nameout == 26) {
//    Name = "Dusty";
//}
//if (nameout == 27) {
//    Name = "Burg";
//}
//if (nameout == 28) {
//    Name = "Arthais";
//}
//if (nameout == 29) {
//    Name = "Callen";
//}
//if (nameout == 30) {
//    Name = "Brittany";
//}
