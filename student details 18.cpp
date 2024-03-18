#include<iostream>
using namespace std;
class person
{
	private:
		string name;
		int age;
		char gender;
	public:
		person(const string& name,int age,char gender):name(name),age(age),gender(gender){}
		void displaydetails()
		{
			cout <<"name="<<name <<endl;
			cout << "age="<< age << endl;
			cout <<"gender="<<gender <<endl;
		}
};
class student:public person
{
	private:
		int rollnumber;
		float marks;
	public:
		student(const string& name,int age,char gender,int rollnumber,float marks)
		:person(name,age,gender),rollnumber(rollnumber),marks(marks){}
	void displaydetails()
	{
		person::displaydetails();
		cout<<"rollnum=" <<rollnumber <<endl;
		cout <<"marks=" <<marks<<endl;
		}	
};
int main()
{
	string name;
	int age,rollnumber;
	char gender;
	float marks;
	
	cout <<"enter the name:";
	cin >> name;
	cout <<"enter the age:";
	cin >> age;
	cout <<"enter the roll number:";
	cin >> rollnumber;
	cout <<"enter the gender:";
	cin >> gender;
	cout <<"enter the marks:";
	cin >> marks;
	student student(name,age,gender,rollnumber,marks);
	cout <<"\nstudent details\n";
	student.displaydetails();
	return 0;
}

