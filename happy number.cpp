#include<iostream>
#include<unordered_set>
using namespace std;
bool ishappy(int n)
{
	unoredered_set<int> seen;
	while ( n!=1 && seen.find(n)==seen.end())
	{
		seen.insert(n);
		int sum=0;
		while(n>0)
		{
			int digit=n%10;
			sum+=digit*digit;
			n/=10;
		}
		n=sum;
	}
	return n==1;
}
int main()
{
	int num;
	cout <<"enter the number:";
	cin >> num;
	if(ishappy(num))
	{
		cout <<"happy number";
	}
	else
	{
		cout <<"not happy number";
	}
}
