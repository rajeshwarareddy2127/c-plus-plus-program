#include<iostream>
using namespace std;
int main()
{
	int num,a,sum=0;
	cout <<"enter the number:";
	cin >> num;
	int temp=num;
	while(num>0)
	{
	a=num%10;
	sum+=a;
	num/=10;	
	}
	if(temp%sum==0)
	{
		cout << "harshad number";
	}
	else
	{
		cout <<"not harshad number";
	}
}

/*
output:
enter the number:200
harshad number

enter the number:99
not harshad number
*/
