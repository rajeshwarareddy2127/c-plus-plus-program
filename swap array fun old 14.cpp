#include<iostream>
using namespace std;
int swap(int n1,int n2)
{
	
	int temp;
	temp=n1;
	n1=n2;
	n2=temp;
	//cout<<n1 <<","<<n2 <<endl;
}
int swap(int a[],int b[],int m)
{
	int temp;
	for(int i=0;i<m;i++)
	{
		temp=a[i];
		a[i]=b[i];
		b[i]=a[i];
	}
	
}
int main()
{
	int a[10],n1,n2,m,b[10];
	cin >> m;
	cin >>n1 >>n2;
	for(int i=0;i<m;i++)
	{
		cin >>a[i];
	}
	for(int i=0;i<m;i++)
	{
		cin >>b[i];
	}
        swap(n1,n2);
        cout <<"swap=" << swap(n1,n2)<< n1 <<","<< n2<<endl;
        swap(a,b,m);
//	cout <<"swap=" <<n1 <<","<<n2<<endl;
	for(int i=0;i<m;i++)
	{
	cout<<"swap="<<a[i]<<endl;
    }
}
