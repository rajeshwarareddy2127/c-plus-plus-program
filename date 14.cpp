#include<iostream>
using namespace std;
int add(int a,int b)
{
	int sum;
	sum=a+b;
	return sum;
}
int main()
{
	int a,b;
	cin >> a>>b;
	cout <<"sum=" <<add(a,b);
}
