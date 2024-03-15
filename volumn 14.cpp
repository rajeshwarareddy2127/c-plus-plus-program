#include<iostream>
using namespace std;
const float pi=3.14;
float vol(int l)
{
	return(l*l*l);
}
float vol(int r,int h)
{
	return(pi*r*r*h);
}
float vol(int l,int b,int h)
{
	return (l*b*h);
}

int main()
{
	float r,b,l,h,t;
	cout <<"enter the number:";
	cin >> l;
	t=vol(l);
	cout <<"volume of cube="<< t<<endl;
	cout<<"enter the numbers:";
	cin >> h;
	t=vol(r,h);
	cout <<"volume="<< t <<endl;
	cout <<"enter the number:";
	cin >> b;
	t=vol(l,b,h);
	cout <<"volumn="<< t <<endl;
	return 0;
}
