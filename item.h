#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

using namespace std;

class Item {
private:
    int id;
    string name;
    double price;
    int quantity;

public:
    Item(int id, const string& name, double price, int quantity);

    int getId() const;
    string getName() const;
    double getPrice() const;
    int getQuantity() const;

    void update(int newId, const string& newName, double newPrice, int newQuantity);
    void printInfo() const;
};

#endif // ITEM_H