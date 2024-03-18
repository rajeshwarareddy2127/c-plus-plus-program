#include<iostream>
using namespace std;
class vechile
{
	public:
		string name;
		string model;
		int year;
	void get()
	{
		cin >>name >> model;
		cin >> year;
	}
	void set()
	{
		cout <<"name=" << name << endl;
		cout <<"model="<<model <<endl;
		cout <<"year="<<year << endl;
	}
};
class car:public vechile
{
	public:
		int seat;
		char fuel;
		void get_p()
		{
			get();
			{
				cin >>seat;
				cin >> fuel;
			}
		}
		void set_p()
		{
			set();
			{
				cout <<"seat="<<seat << endl;
				cout <<"fuel="<<fuel << endl;
				
			}
		}
};
class truck:public vechile
{
	public:
		int payload;
		int towing;
		void get_p1()
		{
			get();
			{
				cin >>payload >>towing;
			}
		}
		void set_p1()
		{
			
				cout <<"payload="<<payload <<endl;
				cout <<"towing="<<towing <<endl;

		}
};
int main()
{
	car c1;
	c1.get_p();
	c1.set_p();
	truck t1;
	t1.get_p1();
	t1.set_p1();
}
