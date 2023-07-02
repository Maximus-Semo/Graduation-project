#ifndef CLIENT_H
#define CLIENT_H


class Client :public Person {
private:
    //Attributes:
    double balance;
public:
    //constructors:
    Client() : Person() {
        this->balance = 0.0;
    }
    Client(int id, string name, string password, double balance) : Person(id, name, password) {
        setBalance(balance);
    }
    //Setter:
    void setBalance(double balance) {
        while(true){
            if(minBalance(balance)){
                this->balance = balance;
                break;
            } else {
                cout<<"very low balance"<<endl;
                cout<<"Enter Balance";
                cin>>balance;
            }
        }

    }
    //Getter:
    double getBalance() {
        return this->balance;
    }
    //Methods:
    bool minBalance(double balance){
        if(balance >= 1500){
            return true;
        }else{
            cout << "Invalid balance!!" << endl;
            return false;
        }
    }
    void display() {
        cout << "-----------------------------------------------------" << endl;
        cout << "==================== display data:-====================" << endl;
        Person::display();
        cout << "Your Balance is : " << this->balance << endl;
        cout << "-----------------------------------------------------" << endl;
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
