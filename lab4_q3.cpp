// to write a c++ programme to enter temperature in fahrenheit and convert it into celsius
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
	cout<<" we will be converting the value of temperature in fahrenheit into its corresponding value in celsius"<<endl;
// Start the actual calculative process
// introduce the variables
	double f;
//take the value in the variables
	cout<<"please enter the temperature in fahrenheit(write only the number, not its unit)"<<endl;
	cin>>f;
// introduce the funtion of variables
	double C=((f-32)*5)/9;
// display the results
	cout<<"The value of "<<f<<" degree fahrenheit in celsius is  "<<setprecision(9)<<C<<endl;
	return 0;
}

