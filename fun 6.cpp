#include<iostream>
using namespace std;
int len(string name)
{
	int n;
	n=name.length();
	cout << n;
}
int main()
{
	string name;
	cin >> name;
	len(name);
}
