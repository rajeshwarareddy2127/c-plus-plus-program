#include<iostream>
using namespace std;
int main()
{
	int i,n,a[10];
	cout <<"enter the length array:";
	cin >> n;
	cout <<"enter the array elements:";
	for (i=0;i<n;i++)
	{
		cin >> a[i];
	}
	cout << "the smallest number is:";
	for (i=0;i<n-1;i++)
	{
		if (a[i+1]-a[i]>1)
		{
			cout << a[i]+1 <<"\n";
			break;
		}
	}
}
/*
output:
enter the length array:7
enter the array elements:0
1
2
4
5
6
7
the smallest number is:3
*/
