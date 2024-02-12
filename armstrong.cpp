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
		n=n/10;
	}
	if(sum==temp)
	{
		cout <<"armstrong";
	}
	else
	{
		cout <<"not armstrong";
	}
}
/*
output:
enter the number:153
armstrong

enter the number:121
not armstrong
*/
