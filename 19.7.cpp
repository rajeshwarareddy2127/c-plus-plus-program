#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
	try 
	{
		int age;
		cout <<"enter the age:";
		cin >> age;
		if(age <0 || age >150)
		{
		 throw invalid_argument("age mout be in between 0 and 150");	
	    }
		cout <<"age="<<age<<endl; 
	}
	catch(const invalid_argument& e)
	{
		cout <<"error:"<<e.what()<<endl;
	}
}
