#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,a,fact,i,temp;
	cout << "enter the number:";
	cin >> n;
	temp=n;
	while(n!=0)
	{
		a=n%10;
		fact=1;
		for(i=1;i<=a;i++)
		{
			fact=fact*i;
		}
			sum=sum+fact;
           n=n/10;
	}
//	cout << sum;
	if (sum==temp)
	{
		cout << "strong number";
	}
	else
	{
		cout <<"not strong number";
	}
}
/*ouput:
enter the number:145
strong number

enter the number:234
not strong number
*/
