#pragma once
#ifndef SAVING
#define SAVING

#include "Account.h"

class Savings : public Account {
public:
    void DoWithdraw(double amount);

    Savings(string name, long taxId, double balance);

    Savings();

    void display();
};
#endif