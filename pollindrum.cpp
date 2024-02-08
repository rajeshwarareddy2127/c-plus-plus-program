#include<iostream>
using namespace std;
int main()
{
	int n,a,temp,sum=0,m=1;
	cout <<"enter the number:";
	cin >> n;
	temp=n;
	while (n!=0)
	{
		a=n%10;
	
		sum=sum*10+a;
		n=n/10;
	}
	if(sum == temp)
	{
		cout <<"polindrum";
	}
	else
	{
		cout <<"not pollindrum";
	}
}
/*ouput:
enter the number:121
polindrum

enter the number:123
not pollindrum
*/
