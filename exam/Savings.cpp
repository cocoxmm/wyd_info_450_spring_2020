

#include "Savings.h"
#include <iostream>
Savings::Savings(string name, long taxId, double balance) : Account(name, taxId, balance) {
}

Savings::Savings() {}

void Savings::DoWithdraw(double amount) {
    setBalance(getBalance() - amount);
    numwithdraws++;
}

void Savings::display() {
    std::cout << "Name: " << getName();
    std::cout << "Tax Id: " << getTaxId();
    std::cout << "Balance: " << getBalance();

    std::cout << "withdraws number is: " << numwithdraws;
    std::cout << std::endl;
}
