#include<iostream>
using namespace std;
int main()
{
	int a[10],i,n;
	cout <<"enter the number:";
	cin >> n;
	cout <<"enter the array elements:";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(i=n-1;i>=0;i--)
	{
		cout << a[i] <<",";
	}
}
/*
output:
enter the number:8
enter the array elements:1
2
3
4
5
6
7
8
8,7,6,5,4,3,2,1,
*/
