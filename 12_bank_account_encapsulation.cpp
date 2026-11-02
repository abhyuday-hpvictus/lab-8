#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() : balance(0) {}

    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
            balance -= amount;
    }

    void displayBalance() const {
        cout << balance;
    }
};

int main() {
    BankAccount account;
    double depositAmount, withdrawAmount;
    cin >> depositAmount >> withdrawAmount;
    account.deposit(depositAmount);
    account.withdraw(withdrawAmount);
    account.displayBalance();
    return 0;
}
