#include<iostream>
using namespace std;
int main()
{
	int n,i,j,m,k;
	cout <<"enter the number of rows: ";
	cin >> n;
//	cout << "enter the number columns:";
//	cin >> m;
	k=0;
	for(i=1;i<=n;i++)
	{
		k=k+1;
		for(j=1;j<=i;j++)
		{
			cout << k; 
		}
		cout <<"\n";
	}
}
/*
output:
enter the number of rows: 5
1
22
333
4444
55555
*/
