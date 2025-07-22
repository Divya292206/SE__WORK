#include <iostream>
#include <string>
using namespace std;

// Base class
class BankAccount {
protected:
    string accountNumber;
    string accountHolderName;
    double balance;
    string branchName;
    string openingDate;

public:
    BankAccount(string accNo, string holder, double bal, string branch, string date)
        : accountNumber(accNo), accountHolderName(holder), balance(bal),
          branchName(branch), openingDate(date) {}

    virtual void calculateInterest() = 0;
    virtual void withdraw(double amount) = 0;
    virtual void deposit(double amount) = 0;
    virtual void displayAccountDetails() = 0;

    virtual ~BankAccount() {}
};

// Derived class: Savings Account
class SavingsAccount : public BankAccount {
public:
    SavingsAccount(string accNo, string holder, double bal, string branch, string date)
        : BankAccount(accNo, holder, bal, branch, date) {}

    void calculateInterest() override {
        double interest = balance * 0.04; // 4% interest
        balance += interest;
        cout << "Savings Interest Added: " << interest << endl;
    }

    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void deposit(double amount) override {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void displayAccountDetails() override {
        cout << "\n[Savings Account]\nAccount Holder: " << accountHolderName
             << "\nAccount No: " << accountNumber
             << "\nBalance: " << balance
             << "\nBranch: " << branchName
             << "\nOpened On: " << openingDate << endl;
    }
};

// Derived class: Current Account
class CurrentAccount : public BankAccount {
public:
    CurrentAccount(string accNo, string holder, double bal, string branch, string date)
        : BankAccount(accNo, holder, bal, branch, date) {}

    void calculateInterest() override {
        cout << "No interest on Current Account." << endl;
    }

    void withdraw(double amount) override {
        if (amount <= balance + 1000) { // Overdraft allowed
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Overdraft Limit Exceeded!" << endl;
        }
    }

    void deposit(double amount) override {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void displayAccountDetails() override {
        cout << "\n[Current Account]\nAccount Holder: " << accountHolderName
             << "\nAccount No: " << accountNumber
             << "\nBalance: " << balance
             << "\nBranch: " << branchName
             << "\nOpened On: " << openingDate << endl;
    }
};

// Derived class: Fixed Deposit Account
class FixedDepositAccount : public BankAccount {
public:
    FixedDepositAccount(string accNo, string holder, double bal, string branch, string date)
        : BankAccount(accNo, holder, bal, branch, date) {}

    void calculateInterest() override {
        double interest = balance * 0.07; // 7% interest
        balance += interest;
        cout << "Fixed Deposit Interest Added: " << interest << endl;
    }

    void withdraw(double amount) override {
        cout << "Withdrawal not allowed before maturity in FD Account!" << endl;
    }

    void deposit(double amount) override {
        cout << "Additional deposit not allowed in Fixed Deposit Account!" << endl;
    }

    void displayAccountDetails() override {
        cout << "\n[Fixed Deposit Account]\nAccount Holder: " << accountHolderName
             << "\nAccount No: " << accountNumber
             << "\nBalance (With Interest): " << balance
             << "\nBranch: " << branchName
             << "\nOpened On: " << openingDate << endl;
    }
};

// Derived class: Recurring Deposit Account
class RecurringDepositAccount : public BankAccount {
private:
    double monthlyDeposit;
    int months;

public:
    RecurringDepositAccount(string accNo, string holder, double bal, string branch, string date, double monthly, int m)
        : BankAccount(accNo, holder, bal, branch, date), monthlyDeposit(monthly), months(m) {}

    void calculateInterest() override {
        double interest = (monthlyDeposit * months * 0.05); // 5% interest
        balance += interest;
        cout << "Recurring Deposit Interest Added: " << interest << endl;
    }

    void withdraw(double amount) override {
        cout << "Withdrawals not allowed in Recurring Deposit before maturity!" << endl;
    }

    void deposit(double amount) override {
        balance += amount;
        cout << "Monthly Deposit: " << amount << endl;
    }

    void displayAccountDetails() override {
        cout << "\n[Recurring Deposit Account]\nAccount Holder: " << accountHolderName
             << "\nAccount No: " << accountNumber
             << "\nBalance (With Interest): " << balance
             << "\nBranch: " << branchName
             << "\nOpened On: " << openingDate << endl;
    }
};

int main() {
    BankAccount* accounts[4];

    accounts[0] = new SavingsAccount("SA123", "Amit Shah", 10000, "Mumbai", "01-01-2024");
    accounts[1] = new CurrentAccount("CA456", "Neha Mehta", 20000, "Ahmedabad", "05-01-2024");
    accounts[2] = new FixedDepositAccount("FD789", "Ravi Kumar", 50000, "Delhi", "10-01-2024");
    accounts[3] = new RecurringDepositAccount("RD012", "Pooja Patel", 0, "Surat", "15-01-2024", 2000, 12);

    for (int i = 0; i < 4; i++) {
        accounts[i]->deposit(2000);
        accounts[i]->calculateInterest();
        accounts[i]->withdraw(1000);
        accounts[i]->displayAccountDetails();
        cout << "--------------------------------------\n";
    }

    // Free memory
    for (int i = 0; i < 4; i++) {
        delete accounts[i];
    }

    return 0;
}

