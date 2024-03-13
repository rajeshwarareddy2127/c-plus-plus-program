#include<iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	bool isodd=static_cast<bool>(num & 1);
	if(isodd)
	{
		cout <<num <<"is odd number" ;
	}
	else
	{
		cout << num <<"is even number";
	}
}
