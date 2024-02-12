#include<iostream>
using namespace std;
int main()
{
	int n,i,j,m,k;
	cout <<"enter the number of rows: ";
	cin >> n;
	for(i=1;i<=n;i++)
	{
		
		for(j=1;j<=i;j++)
		{
			cout <<"* "; 
		}
		cout <<"\n";
	}
}
/*
output:
enter the number of rows: 5
*
* *
* * *
* * * *
* * * * *

*/
