/* Name: Alex Abere
 ADM BSCIT-05-0063/2024
 VERSION 1
 DATE:1/03/2025*/

#include <iostream>

using namespace std;

// Base Class: AccountHolder
class AccountHolder {
protected:
    string name; // Protected data member to store the name

public:
    // Function to set the name
    void setName(string n) {
        name = n;
    }

    // Function to get the name
    string getName() const {
        return name;
    }
};

// Derived Class: BankAccount
class BankAccount : public AccountHolder {
private:
    int accountNumber;  // Private data member to store account number
    double balance;     // Private data member to store balance

public:
    // Constructor to initialize name, accountNumber, and balance
    BankAccount(string n, int accNum, double bal) {
        setName(n);
        accountNumber = accNum;
        balance = bal;
    }

    // Function to get the account number
    int getAccountNumber() const {
        return accountNumber;
    }

    // Function to get the balance
    double getBalance() const {
        return balance;
    }
};

// Derived Class: SavingsAccount
class SavingsAccount : public BankAccount {
private:
    double interestRate; // Private data member to store interest rate

public:
    // Constructor to initialize name, accountNumber, balance, and interestRate
    SavingsAccount(string n, int accNum, double bal, double rate)
        : BankAccount(n, accNum, bal) {
        interestRate = rate;
    }

    // Function to get the interest rate for the savings account
    double getInterestRate() const {
        return interestRate;
    }
};

// Main function
int main() {
    // Create a SavingsAccount object for testing
    SavingsAccount savingsAccount1("Alex Abere", 92005, 10000.50, 3.5);

    // Display information for the SavingsAccount
    cout << "Account Holder: " << savingsAccount1.getName() << endl;
    cout << "Account Number: " << savingsAccount1.getAccountNumber() << endl;
    cout << "Account Balance: ksh" << savingsAccount1.getBalance() << endl;
    cout << "Interest Rate: " << savingsAccount1.getInterestRate() << "%" << endl;

    return 0;
}
