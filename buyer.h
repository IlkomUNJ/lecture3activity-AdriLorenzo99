#ifndef BUYER_H
#define BUYER_H

#include <string>
#include "bank_customer.h"
using namespace std;

class Buyer {
private:
    int id;
    string name;
    BankCustomer account;

public:
    Buyer(int id, string name, const BankCustomer& account)
        : id(id), name(name), account(account) {
        this->id = id;
        this->name = name;
        this->account = account;
        }
    
    int getId() const { return id; }
    string getName() const { return name; }

    void setId(int newId) { id = newId; }
    void setName(const string& newName) { name = newName; }
};

#endif // BUYER_H
