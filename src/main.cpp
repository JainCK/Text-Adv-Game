
#include <iostream>
#include "player.h"
#include "item.h"
#include "utils.cpp"

using namespace std;

int main() {
    cout << "Welcome to the Fantasy Adventure Game!" << endl;

    // Create a player
    Player player = createCharacter();

    // Add some items to the player's inventory
    player.addItem(Item("Sword", "A sharp blade, perfect for close combat."));
    player.addItem(Item("Health Potion", "Restores 50 health points."));
    player.addItem(Item("Key", "A key to unlock mysterious doors."));

    // Show the player's inventory
    player.showInventory();

    // Continue the adventure...
    cout << "Your adventure begins now..." << endl;

    return 0;
}
