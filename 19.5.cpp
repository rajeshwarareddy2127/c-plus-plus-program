#include<iostream>
using namespace std;
float division(int n,int m)
{
	if(m==0)
	{
		throw"attempted divided by zero";
	}
	return(n/m);
}
int main()
{
	int n,m;
	cin >> m;
	cin >> n;
	try
	{
		float k=division(n,m);
		cout<<"k="<<k;
	}
	catch(char e)
	{
		cout <<e <<endl;
	}
}

