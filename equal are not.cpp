#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "enter the numbers";
	cin >> a;
	cout <<"enter the number2:";
	cin >> b;
	if(a==b)
	{
		cout <<"two number are equal";
	}
	else
	{
		cout <<"two number not equal";
	}
	return 0;
}
/*output:
enter the numbers12
enter the number2:19
two number not equal

enter the numbers20
enter the number2:20
two number are equal
*/
