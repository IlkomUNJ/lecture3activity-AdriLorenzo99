#ifndef SELLER_H
#define SELLER_H

#include "bank_customer.h"
#include <string>
#include <vector>

using namespace std;

class Seller : public BankCustomer {
public:
    Seller(int id, const string& name, double balance)
        : BankCustomer(id, name, balance) {
    }
};

#endif // SELLER_H