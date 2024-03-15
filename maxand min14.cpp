#include<iostream>
using namespace std;
int findmax(int a[],int n)
{
	int max,min,i;
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	cout <<"max="<<max;
	min=a[1];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	cout <<"min=" <<min;
}
int main()
{
	int a[10],n,i;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int result=findmax(a,n);
	
}
