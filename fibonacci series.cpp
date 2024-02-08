#include<iostream>
using namespace std;
int main()
{
	int t1=0,t2=1,t3,n,i;
	cout << "enter the number:";
	cin >> n;
	cout << t1  << t2 << "\n";
	t3=t1+t2;
	for(i=3;i<=n;i++)
	{
		cout << t3 <<"\n";
		t1=t2;
		t2=t3;
		t3=t1+t2;
	}
}
/*
output:
enter the number:10
01
1
2
3
5
8
13
21
34
*/
