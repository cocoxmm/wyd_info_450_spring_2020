#pragma once
#ifndef ACCOUNT
#define ACCOUNT

#include <string>

using namespace std;

class Account {
public:
    void setName(string name);

    void setTaxId(long taxId);

    void setBalance(double balance);

     string getName();

    long getTaxId();

    double getBalance();

    void MakeDeposit(double amount);

    Account(  string name, long taxId, double balance);

    Account();

    virtual void display();
private:
    string name;
    long taxId;
    double balance;
protected:
    int numdeposits;
    int numwithdraws;
};

#endif