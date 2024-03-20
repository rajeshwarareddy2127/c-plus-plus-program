#include<iostream>
#include<string>
using namespace std;
class employee
{
	protected:
		string name;
		int id;
		string dept;
	public:
		employee(const string& name,int id,const string& dept):name(name),id(id),dept(dept){}
		virtual void display()
		{
				cout <<"name="<<name<<endl;
			cout <<"id="<<id<<endl;
			cout <<"dept="<<dept <<endl;
		}
};
class manager:public employee
{
	private:
		int salary;
	public:
		manager(const string& name,int id,string& dept,int salary):employee(name,id,dept),salary(salary){}
		void display()
		{
			employee::display();
			cout <<"salary="<<salary <<endl;
		
		}
};
class clerk:public employee
{
	private:
		string office;
	public:
		clerk(string& name,int id,string& dept,int salary,string office)
		:employee(name,id,dept),office(office){}
		
		void display()
		{
			employee::display();
			cout <<"office="<<office <<endl;
		
		}
};
int main()
{
string name,dept,office;
int id,salary;
cout<<"enter the employee name:";
cin >>name;
cout <<"enter the id:";
cin >> id;
cout <<"enter the dept:";
cin >> dept;
cout <<"enter the salary:";
cin >> salary;
cout <<"enter the office:";
cin >> office;
 
 manager man(name,id,dept,salary);
 clerk  cl(name,id,dept,salary,office);
 man.display();
 cl.display();
}
