#include<iostream>
using namespace std;
int fact(int n)
{
	int i,d=1;
	for(i=1;i<n;i++)
	{
		d+=d*i;
	}
	return d;
}
int main()
{
	int n;
	cin >> n;
  int  result=fact(n);
	cout <<"fact="<<result;
}
