
#include "player.h"
#include <iostream>
using namespace std;

// Function to create a player character
Player createCharacter() {
    string playerName;
    cout << "Enter your character's name: ";
    getline(cin, playerName);
    Player player(playerName);
    cout << "Character created!" << endl;
    player.displayStats();
    return player;
}
