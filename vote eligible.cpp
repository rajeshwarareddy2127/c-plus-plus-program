#include<iostream>
using namespace std;
int main()
{
	int age,i,count=0;
	cout << "enter the age :";
	cin >> age;
	if (age<18)
	{
		for(i=1;i<18;i++)
		{
			age+=1;
			count++;
			if(age==18)
			{
				cout <<"after " << count  << "years person is eligible for vote" << endl;
			}
		}
	}
	else
	{
		cout <<"person is eligible for vote";
	}
}
