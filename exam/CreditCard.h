#pragma once
#ifndef CREDIT_CARD
#define CREDIT_CARD
#include "Account.h"
#include <string>

class CreditCard : public Account {
private:
    long cardnumber;
    string last10charges[10];
public:
    void DoCharge(string name, double amount);

    void MakePayment(double amount);

    void display();

    CreditCard();

    CreditCard(string name, long taxId, double balance);
};

#endif