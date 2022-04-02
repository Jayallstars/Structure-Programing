#include <iostream>
using namespace std;

class BankAccount {
    public:
        BankAccount(double m, string n)
            : money_(m), name_(n) {}
        
        void Deposit(double amount) {
            money_ += amount;
        }

        void Withdraw(double amount) {
            money_ -= amount;
        }

        double GetMoney() const {
            return money_;
        }

        string GetName() const {
            return name_;
        }

        void Setname(string n) {
            name_ = n;
        }
    
    private:
        double money_;
        string name_;
};

int main() {

    BankAccount JayAcc(0, "Jay");

    //BankAccount JayAcc(100, "Jay");
    JayAcc.Deposit(100);
    JayAcc.Withdraw(20);
    
    cout << JayAcc.GetMoney() << endl;
}
