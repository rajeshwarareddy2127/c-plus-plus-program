#include<iostream>
using namespace std;
int main()
{
int l;
cout << "enter the number:";
cin >> l;
if(l>0)
{
	cout << "positive number";
}
else if(l<0)
{
	cout <<"negative number";
}
else
{
	cout <<"zero";
}
}
/*
output:
enter the number:12
positive number

enter the number:-23
negative number

enter the number:0
zero
*/

