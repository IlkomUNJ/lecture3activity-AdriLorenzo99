#include "item.h"

Item::Item(int id, const string& name, double price, int quantity) {
    this->id = id;
    this->name = name;
    this->price = price;
    this->quantity = quantity;
}

int Item::getId() const {
    return this->id;
}

string Item::getName() const {
    return this->name;
}

double Item::getPrice() const {
    return this->price;
}

int Item::getQuantity() const {
    return this->quantity;
}

void Item::update(int newId, const string& newName, double newPrice, int newQuantity) {
    this->id = newId;
    this->name = newName;
    this->price = newPrice;
    this->quantity = newQuantity;
}

void Item::printInfo() const {
    cout << "Item ID: " << this->id << endl;
    cout << "Item Name: " << this->name << endl;
    cout << "Price: $" << this->price << endl;
    cout << "Quantity: " << this->quantity << endl;
}