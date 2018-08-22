//to write a c++ programme to convert days into weeks months and years
//include the library
#include<iostream>
#include<cstring>
#include<iomanip>
//use namespace
using namespace std;
//introduce the main function
int main ()
{
	// create a program that welcomes user
	string NAME;
	cout<<"Hello"<<endl;
	cout<<"What's your name?"<<endl;
	getline(cin,NAME),
	cout<<"Welcome "<<NAME<<endl;
	cout<<"let's get started"<<endl;
	cout<<"We will be converting number of days into its corresponding value in weeks, months and years"<<endl;
	//start the actual programme to convert days into weeks,months and years
	// declare the variables
	double d;
	// get input in the variable
	cout<<"please enter the number of days which you want to convert"<<endl;
	cin>>d;
	//write the function of variables
	double week=d/7,month=d/30,year=d/365;
	//give the output i.e.,result
	cout<<"The coressponding value of number of "<<d<<" days in weeks is "<<setprecision(9)<<week<<endl;
	cout<<"The coressponding value of number of "<<d<<" days in months is "<<setprecision(9)<<month<<endl;
	cout<<"The coressponding value of number of "<<d<<" days in years is "<<setprecision(9)<<year<<endl;
	// return
	return 0;
}

