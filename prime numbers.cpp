#include<iostream>
using namespace std;
int main()
{
	int i,j,n,count=0;
	cout <<"enter the number:";
	cin >> n;
	for(i=1;i<=n;i++)
	{
		count=0;
		for(j=2;j<=n;j++)
		{
			if(i%j==0)
			{
			count++;	
			}
		}
		if(count <2)
		{
			cout << i <<"\n";
		}
	}
}
/*
ouput:
enter the number:20
1
2
3
5
7
11
13
17
19
*/
