// to write a c++ programme to enter temperature in celsius and convert it into fahrenheit
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
	cout<<" we will be converting the value of temperature in celsius into its corresponding value in fahrenheit"<<endl;
// Start the actual calculative process
// introduce the variables
	double c;
//take the value in the variables
	cout<<"please enter the temperature in celsius(write only the number, not its unit)"<<endl;
	cin>>c;
// introduce the funtion of variables
	double F=((9*c)/5)+32;
// display the results
	cout<<"The value of "<<c<<" degree celsius in fahrenheit is "<<setprecision(9)<<F<<endl;
	return 0;
}

