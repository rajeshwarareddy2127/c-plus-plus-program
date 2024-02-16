#include<iostream>
#include<algorithm>
using namespace std;
string show(string name)
{
	reverse(name.begin(),name.end());
	cout << name;
}
int main()
{
	string name;
	cin >> name;
	show(name);
}
