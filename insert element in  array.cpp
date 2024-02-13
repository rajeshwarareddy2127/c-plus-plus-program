#include<iostream>
using namespace std;
int main()
{
	int a[10],n,i,p,e;
	int b[10],l=0;
	cout << "enter the number:";
	cin >> n;
	cout << "enter the position:";
	cin >> p;
	cout << "enter the element:";
	cin >> e;
	cout <<"enter the elements:";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(i=0;i<n;i++)
	{
		
		if(i==p)
		{
			b[l]=e;
			l++;
			//a[i]=e;
		}
		else
		{
			b[l]=a[i];
	    	l++;
		}
	
		
	}
	for(l=0;l<n;l++)
	{
		cout << b[l];
	}
	
}
