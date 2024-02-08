#include<iostream>
using namespace std;
int main()
{
	int fact=1,i,n;
	cout << "enter the number:";
	cin >> n;
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	cout << fact;
}
/*
output:
enter the number:7
5040
*/
