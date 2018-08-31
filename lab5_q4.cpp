// To create a c++ programme whether a number is divisible by 5 and 11 or not
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
	cout<<"lets get started, we will be finding out whether a number is divisible by 5 and 11 or not"<<endl;
// declare the variable,	
	int a;
	cout<<"let's get started "<<endl;
	cout<<"enter the number"<<endl;
// get input in the variable
	cin>>a;
// give the conditions
 	if ((a%5==0)&&(a%11==0))
		{cout<<a<<" is divisible by both 5 and 11"<<endl;}
	else {cout<<a<<" is neither divisible by 5 nor by 11"<<endl;}
// return the main function
	return 0;
}
