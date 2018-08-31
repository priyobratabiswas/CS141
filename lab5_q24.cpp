// To create a c++ programme to print all alphabets from A to Z
#include<iostream>
#include<string>
// using namespace
using namespace std;
// introduce the main function
int main ()
{
// create a programme that asks user's name and welcomes him
	string name;
	cout<<"Hello, what's your name?"<<endl;
	cin>>name;
	cout<<"welcome "<<name<<endl;
	cout<<"lets get started, we will be printing (Or Displaying) all alphabets from A to Z"<<endl;
// declare the variable,	
	int i=65;
	cout<<"let's get started "<<endl;
	
	while (i<=90)
	{
		while (i==65){cout<<"All alphabets from A to Z are listed below"<<endl;
		break;}
		cout<<char(i)<<endl;
		i++;
	}
// return the main function
	return 0;
}
