#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item {
public:
    string name;
    string description;

    Item(string name, string description);  // Constructor
};

#endif
