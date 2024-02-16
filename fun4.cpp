#include<iostream>
using namespace std;
int small(int a[],int n)
{
	int max,min,i;
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout <<"max=" << max << endl;
	min=a[1];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	cout <<"min="<< min << endl;
	
}
int main()
{
	int a[10],n,i;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	small(a,n);
}
