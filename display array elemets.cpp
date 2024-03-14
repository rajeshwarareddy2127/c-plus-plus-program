#include<iostream>
using namespace std;
int main ()
{
	int a[10];
	int i,n;
	cin >>n;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(i=0;i<n;i++)
	{
		cout <<"array=" <<a[i]<<","<<endl;
	}
}
