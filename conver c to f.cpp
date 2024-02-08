#include<iostream>
using namespace std;
int main()
{
	float a[10],b[10];
	int i,n,j=0;
	cout <<"enter the length of array:";
	cin >> n;
	cout << "enter the celcius values:";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for (i=0;i<n;i++)
	{
		b[j]=(1.8*a[i])+32;
		cout<< b[j];
		j++;
	}
	for(i=0;i<n;i++)
	{
		cout <<"after the convertion" <<b[i] << endl;
	}
	
}
/*output:
enter the length of array:5
enter the celcius values:4.4
10
12
7
70
39.925053.644.6158after the convertion39.92
after the convertion50
after the convertion53.6
after the convertion44.6
after the convertion158
*/
