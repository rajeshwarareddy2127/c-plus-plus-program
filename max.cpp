#include<iostream>
template <typename t>

int max(const t* a,int n)
{
	int maxi,i;
    t maxi=a[0];
	for(i=1;i<n;i++)
	{
	 if(maxi < a[i])
	 {
	 	maxi=a[i];
	 }
	}
	return maxi;
}
int main()
{
	int a[10];
	int i,n;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
cout <<	"max=" << max(a,n);
  float b[10],i,n;
  for(i=0;i<n;i++)
  {
  	cin >> b[i];
  }
  cout << "max=" << max(b,n);


}
