#include<iostream>
using namespace std;
class vector2d
{
	private:
    	double x;
    	double y;
	
	public:
		vector2d(double x, double y):x(x),y(y){}
		vector2d operator+(const vector2d& other) const
		{
			return vector2d(x+other.x,y+other.y);
		}
		
		vector2d operator-(const vector2d& other) const
		{
			return vector2d(x-other.x,y-other.y);
		}
	
		vector2d operator*(double scalar) const
		{
			return vector2d(x*scalar,y*scalar);
		}
		
		void display() const{
		cout <<"(" <<x <<","<<y <<")" <<endl;
		}
		
};
int main()
{
	vector2d v1(1,2);
	vector2d v2(3,4);
	
	vector2d additionresult=v1+v2;
	cout <<"addition result:";
	additionresult.display();
	
	vector2d substraction=v1-v2;
	cout <<"substraction:";
	substraction.display();
	
	double scalar=2.5;
	vector2d scalarmultiply=v1*scalar;
	cout<<"scalar multiply result:";
	scalarmultiply.display();
}
