
#include "player.h"
#include <iostream>

// Constructor for Player
Player::Player(string name) : name(name), health(100), strength(10), intelligence(10), defense(5) {}

// Display player's stats
void Player::displayStats() {
    cout << "Player: " << name << endl;
    cout << "Health: " << health << endl;
    cout << "Strength: " << strength << endl;
    cout << "Intelligence: " << intelligence << endl;
    cout << "Defense: " << defense << endl;
}

// Add item to player's inventory
void Player::addItem(Item item) {
    inventory.push_back(item);
    cout << item.name << " added to inventory." << endl;
}

// Show items in the inventory
void Player::showInventory() {
    cout << "Inventory: " << endl;
    for (auto &item : inventory) {
        cout << "- " << item.name << ": " << item.description << endl;
    }
}
