#include<iostream>
using namespace std;
class bankaccount
{
	protected:
		double balance;
	public:
		bankaccount(double balance):balance(balance){}
		virtual void withdraw(double amount)=0;
};
class savingsacc:public bankaccount
{
	public:
		savingsacc(double balance):bankaccount(balance){}
		void withdraw(double amount)
		{
			if(amount <=balance)
			{
				balance-=amount;
				cout <<"withdraw is sucessfully"<<endl;
				cout <<"remaining balance="<<balance <<endl;
			}
			else
			{
				cout <<"insufficient funds"<<endl;
			}
		}
};
class currentac:public bankaccount
{
	public:
		currentac(double balance):bankaccount(balance){}
		void withdraw(double amount)
		{
			if(amount <=balance)
			{
				balance-=amount;
				cout <<"withdraw is sucessfully"<<endl;
				cout <<"remaining balance="<<balance<<endl;
			}
			else
			{
				cout <<"insufficient funds"<<endl;
			}
		}
};
int main()
{
	savingsacc ac(1000);
	currentac  ac1(100000);
	
	ac.withdraw(500);
	ac.withdraw(800);
	
	ac1.withdraw(20000);
	ac1.withdraw(10000);
}
