#include<iostream>
using namespace std;
int main()
{
	int a ,num,flag=0;
	cout << "enter the number:";
	cin >> a;
	(a%3==0)? cout << a <<"is divisible by 3":cout << a <<"not divisible by 3";
	
}
/*output:
enter the number:19
19not divisible by 3
enter the number:15
15is divisible by 3
*/
