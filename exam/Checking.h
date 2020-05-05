#pragma once
#ifndef CHECKING
#define CHECKING
#include "Account.h"

class Checking : public Account {
private:
    int last10checks[10];
public:
    void WriteCheck(int checknum, double amount);

    Checking( string name, long taxId, double balance);

    Checking();

    void display();
};

#endif