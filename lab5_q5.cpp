// To create a c++ programme whether a number is even or odd
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
	cout<<"lets get started, we will be finding out whether a number is even or odd"<<endl;
// declare the variable,	
	int a;
	cout<<"let's get started "<<endl;
	cout<<"enter the number"<<endl;
// get input in the variable
	cin>>a;
// give the conditions
 	if (a%2==0)
		{cout<<a<<" is even"<<endl;}
	else 
		{cout<<a<<" is odd"<<endl;}
// return the main function
	return 0;
}
