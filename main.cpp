#include <iostream>
#include "buyer.h"
#include "bank_customer.h"
#include "seller.h"
#include "item.h"

int main() {
    BankCustomer customer(1, "John Doe", 1000.0);
    Buyer buyer(1, customer.getName(), customer);

    return 0;
}