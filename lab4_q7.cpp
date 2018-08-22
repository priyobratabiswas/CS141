// to write a c++ programme to find the area of an equilateral triangle
// include the library
#include<iostream>
#include<cstring>
#include<iomanip>
#include<cmath>
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
	cout<<"We will be finding out the area of an equilateral triangle from the value of its side length"<<endl;
// Start the actual calculative process
// introduce the variables
	double a;
//take the value in the variables
	cout<<"please enter the length of side of the equilateral triangle(only enter numerical value, no units)"<<endl;
	cin>>a;
// introduce the funtion of variables
	double A=((sqrt(3))/4)*(a*a);
// display the results
	cout<<"The value of area of an equilateral triangle of side length "<<a<<" units is "<<A<<" sq.units"<<endl;
	return 0;
}

