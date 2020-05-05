#include <iostream>
#include "CreditCard.h"
#include "Checking.h"
#include "Savings.h"

const double amount = 10.00;
const int checkNum = 8.0;
const double cardPayment = 12.00;
const string cardName = "abcdefg";
int main() {
    string name = "abcde";
    long id = 123456;
    double balance = 100.00;

    CreditCard *card = new CreditCard(name, id, balance);
    Checking *checking = new Checking(name, id, balance);
    Savings *savings = new Savings(name, id, balance);

    int exit = 1;
    while (exit != 0) {
        cout << "Checking balance: $" << checking->getBalance() << ". Savings balance: $" << savings->getBalance() << ". Credit Card balance: $" << card->getBalance() << endl;

        cout << "1. Savings Deposit" << endl;
        cout << "2. Savings Withdrawal" << endl;
        cout << "3. Checking Deposit" << endl;
        cout << "4. Write A Check" << endl;
        cout << "5. Credit Card Payment" << endl;
        cout << "6. Make A Charge" << endl;
        cout << "7. Display Savings" << endl;
        cout << "8. Display Checking" << endl;
        cout << "9. Display Credit Card" << endl;
        cout << "0. Exit" << endl << endl;
        cout << "please choose: ";
        cin >> exit;
        if (exit == 1) {
            savings->MakeDeposit(amount);
        } else if(exit == 2) {
            savings->DoWithdraw(amount);
        } else if(exit == 3) {
            checking->MakeDeposit(amount);
        } else if(exit == 4) {
            checking->WriteCheck(checkNum, amount);
        } else if(exit == 5) {
            card->MakePayment(cardPayment);
        } else if(exit == 6) {
            card->DoCharge(cardName, amount);
        } else if(exit == 7) {
            savings->display();
        } else if(exit == 8) {
            checking->display();
        } else if(exit == 9) {
            card->display();
        } else if(exit == 0) {
            cout << "exit..." << endl;
        } else {
            cout << "input error." << endl;
        }
    }

    return 0;
}