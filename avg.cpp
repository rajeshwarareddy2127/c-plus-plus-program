#include<iostream>
using namespace std;
int main()
{
	int a,b,c,sum=0;
	int avg;
	cout <<"enter the numbers:";
	cin >> a;
	cin >> b;
	cin >> c;
	sum=a+b+c;
	avg=sum/3;
	cout << "sum=" << sum <<"\n";
	cout <<"avg=" << avg;
	return 0;
}
/* output:enter the numbers:12
16
34
sum=62
avg=20
*/

