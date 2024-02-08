#include<iostream>
using namespace std;
int main()
{
	char s;
	cout <<"enter the character:";
	cin >> s;
	if(s=='a'||s=='o'||s=='i'||s=='u'||s=='e'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
	{
		cout <<"vowel";
	}
	else
	{
		cout <<"consonant";
	}
	return 0;
}
/*
output:
enter the character:o
vowel

enter the character:p
consonant
*/

