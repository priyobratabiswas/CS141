// To create a c++ programme which finds the maximun between two numbers
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
	cout<<"lets get started, we will be finding out the maximum between two numbers"<<endl;
// declare the variables	
	double a,b;
	cout<<"let's get started using some numbers"<<endl;
	cout<<"enter two numbers"<<endl;
// get input in the variables
	cin>>a;
	cin>>b;
// give the conditions
 	if ( a>b )
		{cout<<a<<" is greater than "<<b<<endl;}
	else if ( a<b ){
		cout<<b<<" is greater than "<<a<<endl;}
	else
		{cout<<" both the numbers are egual."<<endl;}
// return the main function
	return 0;
}
