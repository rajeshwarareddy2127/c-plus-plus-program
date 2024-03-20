#include<iostream>
#include<stdexcept>
#include<cmath>
using namespace std;
int main()
{
	try
	{
	int n,m;
	cout <<"enter the number:";
	cin >> n;
	if(n<0)
	{
		throw invalid_argument("invalide number");
	}
	m=pow(n,2);
	cout <<"square of number="<< m<<endl;
   }
   catch( const invalid_argument& d)
   {
   	cout <<"error:"<<d.what()<<endl;
   }
	
}
