#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin >> a>> b>>c;
	if(a>b && a>c)
	{
		cout <<"a is great";
	}
	else if(b>c)
	{
		cout << "b is great";
	}
	else
	{
		cout << "c is greatest";
	}
}
