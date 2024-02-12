#include<iostream>
using namespace std;
int main()
{
	int n,i,j,l,m;
	cout <<"enter the rows:";
	cin >> n;
	for(i=0;i<n;i++)
	{
		m=1;
		for(j=1;j<(n-i);j++)
		{
			cout <<"  ";
		}
		for(l=0;l<=i;l++)
		{
			cout <<"  " << m;
			m=m*(i-l)/(l+1);
		}
		cout << endl << endl;
	}
	cout << endl;
	return 0;
}
/*
output:
enter the rows:5
          1

        1  1

      1  2  1

    1  3  3  1

  1  4  6  4  1

*/
