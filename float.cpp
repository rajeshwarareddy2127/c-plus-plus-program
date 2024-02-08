#include<iostream>
using namespace std;
int main()
{
	float a,b,sum=0,mul,sub=0,div,mod;
	cout <<"enter the numbers:";
	cin >> a;
	cout <<"enter the number 2:";
	cin >> b;
	sum=a+b;
	mul=a*b;
	sub=a-b;
	div=a/b;

	cout <<"sum=" << sum <<"\n";
	cout <<"mul=" << mul <<"\n";
	cout <<"sub=" << sub <<"\n";
	cout << "div=" << div <<"\n";
	
	return 0;
}
/*
output:
enter the numbers:14
enter the number 2:25
sum=39
mul=350
sub=-11
div=0.56

*/

