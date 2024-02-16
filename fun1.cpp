#include<iostream>
using namespace std;
int factorial(int fact,int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout <<"fact=" << fact;
	return n;
}
int main()
{
	int n,fact=1;
	cout <<"enter the number:";
	cin >> n;
	factorial(fact,n);
}
