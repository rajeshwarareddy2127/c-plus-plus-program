#include<iostream>
using namespace std;
int main()
{
	int n,i,j,l,k;
	cout << "enter the number:";
	cin >> n;
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			cout << "  ";
	    }
		for(l=1;l<=(2*i-1);l++)
		{
			cout << "* ";
		}
		
		cout <<"\n";
	}
	for(i=n-1;i>=0;i--)
	{
		for(j=n-i;j>=1;j--)
		{
			cout << "  ";
		}
		for(l=1;l<(2*i-2);l++)
		{
			cout <<"* ";
		}
		cout <<"\n";
	}
}
/*
output:
enter the number:10

                *
              * * *
            * * * * *
          * * * * * * *
        * * * * * * * * *
      * * * * * * * * * * *
    * * * * * * * * * * * * *
  * * * * * * * * * * * * * * *
* * * * * * * * * * * * * * * * *
  * * * * * * * * * * * * * * *
    * * * * * * * * * * * * *
      * * * * * * * * * * *
        * * * * * * * * *
          * * * * * * *
            * * * * *
              * * *
                *
                */
