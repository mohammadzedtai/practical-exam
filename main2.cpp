#include <iostream>
using namespace std;

class BankAccount {
private:
    string ownerName;
    int accountNumber;
    float balance;

public:
    void setDetails(string name, int accountNum, float bal) {
        ownerName = name;
        accountNumber = accountNum;
        balance = bal;
    }

    void credit(float amount) {
        balance += amount;
    }

    void debit(float amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }

    void displayBalance() {
        cout<<"\n|------Account infometion------|\n";
        cout << "\n Account: " << accountNumber
             << "\n Owner: " << ownerName
             << "\n Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    string name;
    int accNumber1;
    float bal, creditAmt, debitAmt;

    cout << "Enter owner name: ";
    getline(cin, name);

    cout << "Enter account number: ";
    cin >> accNumber1;

    cout << "Enter initial balance: ";
    cin >> bal;

    account.setDetails(name, accNumber1, bal);

    cout << "Enter amount to credit: ";
    cin >> creditAmt;
    account.credit(creditAmt);

    cout << "Enter amount to debit: ";
    cin >> debitAmt;
    account.debit(debitAmt);

    account.displayBalance();

    return 0;
}
