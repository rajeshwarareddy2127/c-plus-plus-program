#include<iostream>
using namespace std;
int main()
{
	int n;
	int t1=0,t2=1,t3;
	cout <<"enter the number:";
	cin >> n;
	if (n==0)
	{
		cout <<"zero term in the fibonacci series is" << t1 << endl;
	}
	else if(n==1)
	{
		cout <<"first term in the fibonacci series is" << t2 << endl;
	}
	else
	{
		for(int i=2;i<=n;i++)
		{
			t3=t1+t2;
			t1=t2;
			t2=t3;
		}
		cout << "the " << n << "nth term in the fibonacci series:" << t3 << endl;
	}
	
	
}
