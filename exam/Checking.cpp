
#include <iostream>
#include "Checking.h"

Checking::Checking(string name, long taxId, double balance) : Account(name, taxId, balance) {
    for (int x = 0; x < sizeof(last10checks); x++) {
        last10checks[x] = 0;
    }
}

Checking::Checking() {}

void Checking::display() {
    std::cout << "Name: " << getName();
    std::cout << "Tax Id: " << getTaxId();
    std::cout << "Balance: " << getBalance();

    std::cout << "Last 10 checks: ";
    for (int i = 0; i < sizeof(last10checks); i++) {
        std::cout << last10checks[i] << " ";
    }
    std::cout << std::endl;
}

void Checking::WriteCheck(int checknum, double amount) {
    setBalance(getBalance() - amount);
    bool is = false;
    for (int i = 0; i < sizeof(last10checks); i++) {
        if (last10checks[i] == 0) {
            last10checks[i] = checknum;
            is = true;
        }
    }

    if (is) {
        for (int i = 0; i < sizeof(last10checks); i++) {
            if (i < sizeof(last10checks) - 1) {
                last10checks[i] = last10checks[i + 1];
            } else {
                last10checks[i] = checknum;
            }
        }
    }
}
