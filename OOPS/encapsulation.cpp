#include<iostream>
using namespace std;
class BankAccount{
  public:
   int balance=0;
   void deposit(int ammount){
    if(balance >= 0){
      balance+=ammount;
    }
  }
   int getBalance(){
    return balance;
  }
   bool withdraw(int ammount){
    if(balance>0 && ammount <= balance){
      balance -= ammount;
      return true;
    }
    else{
     cout<<"Insufficient balance\n";
      return false;
    }
  }
};
int main(){
  BankAccount b1;
  b1.deposit(300);
  cout<<"Balance : "<<b1.getBalance()<<endl; // Balance : 300
  b1.withdraw(200);
  cout<<"Balance : "<<b1.getBalance()<<endl; // Balance : 100
  b1.withdraw(500); // Insufficient balance
  return 0;
}