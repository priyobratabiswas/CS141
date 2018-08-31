// To create a c++ programme to check whether a number is positive, negative or zero
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
	cout<<"lets get started, we will be checking whether a number is positive, negative or zero"<<endl;
// declare the variables	
	double a;
	cout<<"let's get started"<<endl;
	cout<<"enter the number"<<endl;
// get input in the variable
	cin>>a;
// give the conditions
 	if ( a>0 )
		{cout<<a<<" is positive "<<endl;}
	else if ( a<0 ){
		cout<<a<<" is negative "<<endl;}
	else
		{cout<<" the numbers is egual to zero"<<endl;}
// return the main function
	return 0;
}
