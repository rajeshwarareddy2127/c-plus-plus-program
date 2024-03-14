#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ofstream myfile("filename.txt");
	myfile<<"hello world!";
	myfile.close();
	 string mytext;
	 ifstream readfile("filename.txt");
	 while(getline(readfile,mytext))
	 {
	 	cout <<  mytext;
	 }
	 readfile.close();
}
