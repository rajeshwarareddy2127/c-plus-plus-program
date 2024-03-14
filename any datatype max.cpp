#include<iostream>
using namespace std;
template <typename T>
T findmax(const T a[],int n)
{
	T max=a[0];
	for(int i=1;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	return max;
}
int main()
{
	int a[]={10,3,4,8,21};
	int max=findmax(a,5);
	cout <<"the maximum elements are:" << max << endl;
	float b[]={3.2f,4.5f,7.9f,8.2f,4.2};
	float maxi=findmax(b,5);
	cout <<"the maximum elements are :"<<maxi << endl;
	double c[]={3.2,4.2,5.4,1.1,9.4};
	double maxum=findmax(c,5);
	cout <<"the maximum number:" << maxum << endl;
	
}
