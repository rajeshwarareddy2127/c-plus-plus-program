#include<iostream>
#include<stdexcept>
using namespace std;
float calculate(int a[],int n)
{
	if(n==0)
	{
		throw "invalide array size:";
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	return (sum/n);
}
int main()
{
	int n,a[10],i;
	cin >> n;
	cout <<"enter the array:";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	try
	{
		float avg=calculate(a,n);
		cout << "ave="<<avg <<endl;
	}
	catch(const  e)
	{
		cout << e<<endl;
	}
	
}
