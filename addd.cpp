#include<iostream>
using namespace std;
int main()
{
	int a,b,sum=0,mul,sub,mod;
	cin >> a;
	cin >> b;
	sum=a+b;
	mul=a*b;
	sub=a-b;
	mod=a%b;
	cout<< "sum=" << sum << "\n";
	cout<<"mul=" << mul << "\n";
	cout<<"sub=" << sub << "\n";
	cout<<"mod=" << mod << "\n";
	return 0;

}
/* output:12
14
sum=26
mul=168
sub=-2
mod=12
*/
