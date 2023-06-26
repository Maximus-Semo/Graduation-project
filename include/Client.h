#ifndef CLIENT_H
#define CLIENT_H


class Client :public Person {
private:
    //Attributes:
    double balance;
public:
    //Constructors:
    Client() : Person() {
        this->balance = 0.0;
    }
    Client(int id, string name, string password, double balance) : Person(id, name, password) {
        this->balance = balance;
    }
    //Setter:
    void setBalance(double balance) {
        this->balance = balance;
    }
    //Getter:
    double getBalance() {
        return this->balance;
    }
    //Methods:
    void display() {
        Person::display();
        cout << "Balance: " << this->balance << endl;
    }
    void deposit(double amount) {
        this->balance += amount;
        cout << "\nSuccessful Deposit" << endl;
    }
    void withdraw(double amount) {
        if(amount <= this->balance) {
            this->balance -= amount;
            cout << "\nSuccessful Withdraw" << endl;
        }else{
            cout << "\nAmount Exceeded" << endl;
        }
    }
    void trancferTo(double amount, Client& recipient) {
        if(amount <= this->balance) {
            this->balance -= amount;
            recipient.balance += amount;
            cout << "\nSuccessful Transfer" << endl;
        }else{
            cout << "\nAmount Exceeded" << endl;
        }
    }
    void checkBalance() {
		cout << "Balance: " << this->balance << endl;
	}
};

#endif // CLIENT_H
