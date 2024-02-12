#include<iostream>
using namespace std;
int main()
{
	int n ,a,sum=0,temp,m;
	cout << "enter the number:";
	cin >> n;
	temp=n;
	a=n*n;
	while(a!=0)
	{
	  m=a%10;
	  sum=sum+m;
	  a/=10;	
	}
	if(sum==temp)
	{
		cout <<"neon number";
	}
	else
	{
		cout <<"not a neon number:";
	}
}
/*
output:
enter the number:9
neon number

enter the number:12
not a neon number:
*/
