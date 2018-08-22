// to write a c++ programme to enter base and height of a triangle and find its area
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
	cout<<"We will be finding out the area of the triangle from the values of its base and height"<<endl;
// Start the actual calculative process
// introduce the variables
	double b,h;
//take the value in the variables
	cout<<"please enter the length of base of a triangle (only enter numerical value)"<<endl;
	cin>>b;
	cout<<"please enter the height of a triangle (only enter numerical value)"<<endl;
	cin>>h;
// introduce the funtion of variables
	double A=((b*h)/2);
// display the results
	cout<<"The value of area of the traingle of base length "<<b<<" units and height "<<h<<" units is "<<A<<" sq.units"<<endl;
	return 0;
}

