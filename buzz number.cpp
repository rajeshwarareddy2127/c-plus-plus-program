#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cout << "enter the number:";
	cin >> n;
	a=n%10;
	if(n%7==0 || a==7)
	{
		cout << "buzz number";
	}
	else
	{
		cout << "not buzz number";
	}
}
/*output:
enter the number:147
buzz number

enter the number:28
buzz number
 
 enter the number:9
not buzz number
*/
