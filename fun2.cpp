#include<iostream>
using namespace std;
int prime(int n)
{
	int count=0,i;
	for(i=1;i<=n;i++)
	{    
	//count=0;
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		cout <<"prime number";
	}
	else
	{
		cout <<"not prime number";
	}
}
int main()
{
	int n;
	cin >> n;
	prime(n);
}
