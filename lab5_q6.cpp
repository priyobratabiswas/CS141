// To create a c++ programme whether a year is leap year or not
// include the library
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
	cout<<"lets get started, we will be finding out whether a whether a year is leap year or not"<<endl;
// declare the variable,	
	int a;
	cout<<"let's get started "<<endl;
	cout<<"enter the year"<<endl;
// get input in the variable
	cin>>a;
// give the conditions
 	if (a%4==0)
		{cout<<a<<" is leap year"<<endl;}
	else 
		{cout<<a<<" is not a leap year"<<endl;}
// return the main function
	return 0;
}
