#include<iostream>
using namespace std;
int circle(int radius)
{
	int area;
	area=3.14*radius*radius;
	cout << "area=" << area;
}
int main()
{
	int radius;
	cin >> radius;
	circle(radius);
}
