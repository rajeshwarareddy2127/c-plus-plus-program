#include<iostream>
using namespace std;
class animals
{
	public:
		virtual void sound()=0;
	
};
class dog:public animals
{
	public:
		void sound()
		{
			cout <<"bow bow...."<<endl;
		}
};
class cat:public animals
{
	public:
		void sound()
		{
			cout <<"meow meow....";
		}
};
int main()
{
	dog myobj;
	cat myobj1;
	myobj.sound();
	myobj1.sound();
}
