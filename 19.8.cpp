#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
	try
	{
		int n;
		cout <<"enter the number:";
		cin >> n;
		if(n<1 || n>100)
		{
			throw invalid_argument("number must be in between 1 and 100");
		//	cout<<"number="<<n<<endl;
		}
		cout<<"number="<<n<<endl;
	}
	catch(const invalid_argument& f)
	{
		cout <<"error:"<<f.what()<<endl;
	}
}
