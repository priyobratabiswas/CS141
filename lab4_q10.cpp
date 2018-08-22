// to write a c++ programme to enter P,T,R and calculate compound interest
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
	cout<<"We will be finding out compound interest"<<endl;
// Start the actual calculative process
// introduce the variables
	double p,t,r,n;
//take the value in the variables
	cout<<"please enter initial amount of money(enter numerical value only)"<<endl;
	cin>>p;
	cout<<"please enter the rate of interest (enter numerical value only)"<<endl;
	cin>>r;
	cout<<"please enter the number of years (enter numerical value only)"<<endl;
	cin>>t;
	cout<<"please enter the number of times the interest is compounded every year (enter numerical value only)"<<endl;
	cin>>n;
// introduce the funtion of variables
	double C=(p*pow((1+(r/n)),(n*t))),I=C-p;
// display the results
	cout<<"The value of net amount after compound interest is "<<setprecision(9)<<C<<" and the increase over initial amount is "<<setprecision(9)<<I<<endl;
	return 0;
}

