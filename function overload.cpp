#include<iostream>
using namespace std;
int area(int r)
{
	float a;
	a=3.14*r*r;
	return a;
}
int  area(int h,int b)
{
	int a;
	a=h*b;
	return a;
}
float area(float d,float e)
{
	float c;
	c=0.5*d*e;
	//cout <<"c=" << c;
	return c;
}

int main()
{
	int r,h,b;
	float d,e;
	cin >> r >> h >> b>>d >> e;
	cout <<"area circle=" << area(r) << endl;
	cout <<"area triangle=" << area(d,e) << endl;
	cout <<"area of rectangle=" << area(h,b) << endl;
}
