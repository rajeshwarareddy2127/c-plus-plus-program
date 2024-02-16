#include<iostream>
#include<algorithm>
using namespace std;
int pollindrum(string name)
{
	string s;
	s=name;
	reverse(name.begin(),name.end());
	if(name==s)
	{
		cout <<"pollindrum";
	}
	else
	{
		cout <<"not pollindrum";
	}
	
}
int main()
{
	string name;
	cin >> name;
	pollindrum(name);
	
}
