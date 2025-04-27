#include<iostream>
using namespace std;
class Account{
private:
    string password;
    long balance;
public:
    double acc_no;
    string acc_name;
    string user_id;  
    void setPassword(string p){
        password=p;
    }
    string getPassword(){
        return password;
    }
    void setBalance(long b){
        balance=b;
    }
    long getBalance(){
        return balance;
    }
};
int main(){
  Account a1;
  a1.acc_name="TIYA GHOSH";
  a1.acc_no=3646387895;
  a1.setPassword("TIYA3");
  a1.setBalance(50000);
  a1.user_id="Tiya3112005";
  cout<<"ACCOUNT HOLDER NAME: "<<a1.acc_name<<endl;
  cout<<"ACCOUNT NUMBER: "<<a1.acc_no<<endl;
  cout<<"USER_ID: "<<a1.user_id<<endl;
  cout<<"ACCOUNT BALANCE: "<<a1.getBalance()<<endl;
  cout<<"SECURITY PASSWORD: "<<a1.getPassword()<<endl;
}
