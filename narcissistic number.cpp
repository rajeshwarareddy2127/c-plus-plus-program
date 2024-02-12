#include<iostream>
using namespace std;
int main()
{
	int n,a,sum=0,temp;
	cout << "enter the number:";
	cin >> n;
	temp=n;
	while(n!=0)
	{
		a=n%10;
		a=a*a*a;
		sum+=a;
		n/=10;
	}
	if(sum==temp)
	{
		cout <<"narcissistic number";
	}
	else
	{
		cout <<"not narcissistic number";
	}
	
}
/*
output:
enter the number:153
narcissistic number

enter the number:81
not narcissistic number
*/
