#include<iostream>
using namespace std;
int main()
{
	int n,a[10],i,p;
	cout << "enter the number:";
	cin >> n;
	cout << "enter the position:";
	cin >> p;
	cout << "enter the elements:";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(i=0;i<n;i++)
	{
		if(i==p)
		{
			
		}
		else
		{
			cout << a[i];
		}
	}
}
/*output:
enter the number:5
enter the position:3
enter the elements:1
2
3
4
5
1235
*/
