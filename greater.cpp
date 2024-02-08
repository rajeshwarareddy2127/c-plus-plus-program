#include<iostream>
using namespace std;
int main ()
{
	int a,b;
	cout << "enter the numbers:";
	cin >> a >> b;
	if(a>b)
	{
		cout << "a is greater";
	}
	else
	{
		cout << "b is greater";
	}
	return 0;
}
/*
output:enter the numbers:17
18
b is greater
enter the numbers:19
1
a is greater
*/
