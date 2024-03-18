#include<iostream>
#include<cmath>
using namespace std;
class shape{
	public:
		virtual void draw() const=0;
		virtual float calculatearea() const=0;
};
class circle:public shape
{
	private:
		float radius;
	public:
		circle(float r):radius(r){}
	    void draw() const override {
		cout <<"Drawing circle"<<endl;
		}
		float calculatearea() const override
		{
			return M_PI*radius*radius;
		}
};
class rectangle:public shape
{
	private:
		int length,width;
	public:
		rectangle(float l,float w):length(l),width(w){}
		void draw() const override{
		cout <<"drawing rectangle"<<endl;
		}
		float calculatearea() const override
		{
			return length*width;
		}
};
class triangle:public shape
{
	private:
		float base,height;
	public:
		triangle(float b,float h):base(b),height(h){}
		void draw() const override
		{
			cout<<"draw triangle"<<endl;
		}
		float calculatearea() const override
		{
			return 0.5*base*height;
		}
};
int main()
{
	circle circle(5);
	rectangle rectangle(4,6);
	triangle triangle(3,8);
	shape* shapes[]={&circle,&rectangle,&triangle};
	for(int i=0;i<3;i++)
	{
		shapes[i]->draw();
		cout <<"Area:"<<shapes[i]->calculatearea()<<endl;
	}
	return 0;
}
