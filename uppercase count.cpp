#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string st;
	int i,n,count=0;
	cout << "enter the string:";
	cin >> st;
	n=st.size();
	cout<< n << endl;
	for(i=0;i<=n;i++)
	{
		if(st[i]>65 && st[i]<92)
		{
			count++;
		}
	}
	cout <<"uppercase:" << count;
}
