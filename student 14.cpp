#include<iostream>
using namespace std;
class student
{
	private:
		string name;
		string sclass;
		int roll;
		int marks;
		public:
			student(const string & name,const string & sclass,int roll,int marks):
				name(name),sclass(sclass),roll(roll),marks(marks){}
		
		string calculategrade(int marks)
		{
			if(marks>=90)
			{
				cout <<"A+";
			}
			else if(marks>=80)
			{
				cout <<"A";
			}
			else if(marks>=70)
			{
				cout <<"B";
			}
			else if(marks>=60)
			{
				cout <<"c";
			}
			else
			{
				cout <<"fails";
			}
		}
		void displayinformation()
		{
			cout <<"name=" <<name <<endl;
			cout <<"sclass="<<sclass <<endl;
			cout <<"roll="<<roll <<endl;
			cout <<"marks="<<marks<<endl;
			cout <<"grade="<<calculategrade(marks)<<endl;
		}
};
int main()
{
	string name,sclass;
	int roll;
	int marks;
	cout <<"enter the students details";
	cout <<"enter the name:";
	cin >> name;
	cout <<"enter the sclass:";
	cin >> sclass;
	cout <<"enter the roll number:";
	cin >> roll;
	cout <<"enter the marks:";
	cin >>marks;
	student obj(name,sclass,roll,marks);
	obj.displayinformation();
}
