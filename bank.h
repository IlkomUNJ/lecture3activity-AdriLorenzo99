#include <vector>
#include "bank_customer.h"
#include <iostream>

class Bank {
private:
    string name;
    vector<BankCustomer> Accounts;
    int customerCount;
};
