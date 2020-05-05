

#include <iostream>
#include "CreditCard.h"

CreditCard::CreditCard(string name, long taxId, double balance) : Account(name, taxId, balance) {
    for (int i = 0; i < sizeof(last10charges); i++) {
        last10charges[i] = "";
    }
}

CreditCard::CreditCard() {
    for (int i = 0; i < sizeof(last10charges); i++) {
        last10charges[i] = "";
    }
}

void CreditCard::MakePayment(double amount) {
    setBalance(getBalance() - amount);
}

void CreditCard::DoCharge(string name, double amount) {
    setBalance(getBalance() - amount);
    bool is = false;
    for (int i = 0; i < sizeof(last10charges); i++) {
        if (last10charges[i] == "") {
            is = true;
            last10charges[i] = name;
        }
    }

    if (is) {
        for (int i = 0; i < sizeof(last10charges); i++) {
            if (i < sizeof(last10charges) - 1) {
                last10charges[i] = last10charges[i + 1];
            } else {
                last10charges[i] = name;
            }
        }
    }
}

void CreditCard::display() {
    std::cout << "Name: " << getName();
    std::cout << "Tax Id: " << getTaxId();
    std::cout << "Balance: " << getBalance();

    std::cout << "last 10 charges: ";
    for (int i = 0; i < sizeof(last10charges); i++) {
        std::cout << last10charges[i] << " ";
    }
    std::cout << std::endl;
}
