#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	cout << "enter the number:";
	cin >> n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum>n)
	{
		cout << "abundent number";
	}
	else
	{
		cout <<"not abundent number";
	}
}
/*
output:
enter the number:96
abundent number

enter the number:17
not abundent number
*/
