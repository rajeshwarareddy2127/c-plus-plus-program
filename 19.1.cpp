#include<iostream>
using namespace std;
class shape
{
	public:
		virtual void draw()=0;
};
class circle:public shape
{
	public:
		void draw()
		{
			cout <<"draw thr circle"<<endl;
		}
};
class rectangle:public shape
{
	public:
		void draw()
		{
			cout <<"draw the rectangle";
		}
};
int main()
{
	
	circle cir;
	rectangle rec;

	cir.draw();
	rec.draw();
}
