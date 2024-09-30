
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "item.h"
using namespace std;

class Player {
public:
    string name;
    int health;
    int strength;
    int intelligence;
    int defense;
    vector<Item> inventory;

    Player(string name);  // Constructor

    void displayStats();  // Show player's stats
    void addItem(Item item);  // Add item to player's inventory
    void showInventory();  // Show items in the inventory
};

#endif
