
/*
Name: Alex Abere
ADM : BSCIT-05-0063/2024
DATE: 02/02/2024 */

#include <iostream>
using namespace std;

class Bank{
	private:
		string name;
		int balance;
		
   public:
   void setName(string n){
	   name = n;
   }
   void setBalance(int b){
	   balance=b;
   }
   
   string getName(){
	   return name;
   }
   
   int getBalance(){
	   return balance;
   }
};

int main(){
	Bank kcb;
	kcb.setName("KCB");
	cout<<"Bank name is "<<kcb.getName()<<endl;
	kcb.setBalance(100000);
	cout<<"Balance is "<<kcb.getBalance()<<endl;
}
