//
// Created by wen on 2020/5/4.
//
#include <iostream>
#include "Account.h"

void Account::setName(string name) {
    Account::name = name;
}

void Account::setTaxId(long taxId) {
    Account::taxId = taxId;
}

void Account::setBalance(double balance) {
    Account::balance = balance;
}

string Account::getName() {
    return name;
}

long Account::getTaxId() {
    return taxId;
}

double Account::getBalance() {
    return balance;
}

Account::Account(string name, long taxId, double balance) : name(name), taxId(taxId), balance(balance) {
    numdeposits = 0;
    numwithdraws = 0;
}

Account::Account() {}

void Account::display() {
    std::cout << "Name: " << getName();
    std::cout << "Tax Id: " << getTaxId();
    std::cout << "Balance: " << getBalance();
}

void Account::MakeDeposit(double amount) {
    setBalance(getBalance() + amount);
}
