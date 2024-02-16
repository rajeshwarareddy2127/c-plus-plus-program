#include<iostream>
using namespace std;
int conver(int cel,float f)
{
	f=(9/5*cel)+32;
	cout << "fer=" << f;
}
int main()
{
	int cel;
	float f;
	cin >> cel;
	conver(cel,f);
}
