// to write a c++ programme to enter two angles of a triangle and find the the third one
// include the library
#include<iostream>
#include<cstring>
#include<iomanip>
// use namespace
using namespace std;
//introduce the main function
int main ()
{
//design the programme to ask and disply user's name
	string NAME;
	cout<<"Hello"<<endl;
	cout<<"What's your name?"<<endl;
	getline(cin,NAME),
	cout<<"Welcome "<<NAME<<endl;
	cout<<"let's get started"<<endl;
	cout<<" we will be finding out the value of third angle of the traingle after knowing the first and second angles(enter numerical values only)"<<endl;
// Start the actual calculative process
// introduce the variables
	double a,b;
//take the value in the variables
	cout<<"please enter the first angle in degrees (enter only the numerical value)"<<endl;
	cin>>a;
cout<<"please enter the second angle in degrees (enter only the numerical value)"<<endl;
	cin>>b;
// introduce the funtion of variables
	double A=(180-(a+b));
// display the results
	cout<<"When two angles of a triangle are given to be "<<a<<" and "<<b<<" degrees then the third angle of the triangle is "<<A<<" degrees"<<endl; 
	return 0;
}

