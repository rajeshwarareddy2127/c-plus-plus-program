#include<iostream>
using namespace std;
int main()
{
	int n1,n2,gcd,r;
	cout <<"enter the number:";
	cin >> n1 >> n2;
	do
	{
		r=n1%n2;
		n1=n2;
		n2=r;
	}
	while(r!=0);
		gcd=n1;
	cout  << gcd << endl;
}
