#include<iostream>
using namespace std;
int main()
{
	int a[10],n,i,sum=0;
	cout << "enter the number:";
	cin >> n;
	cout << "enter the array elements:";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	cout << "sum of array=" << sum ;
}
/*
output:
enter the number:5
enter the array elements:9
8
7
6
5
sum of array=35
*/
