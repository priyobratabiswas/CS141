// to write a c++ programme to enter length in centimeter and convert it into meter and kilometer
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
	cout<<" we will be converting the centimeter value into its corresponding value in meter and kilometer"<<endl;
// Start the actual calculative process
// introduce the variables
	double c;
//take the value in the variables
	cout<<"please enter the value in cm(write only the number, not its unit)"<<endl;
	cin>>c;
// introduce the funtion of variables
	double dmeter= c/100,dkilometer=c/100000;
// display the results
	cout<<"The value of "<<c<<"cm in meter is "<<setprecision(5)<< dmeter<<endl;
	cout<<"The value of "<<c<<"cm in kilometer is "<<setprecision(9)<< dkilometer<<endl;
	return 0;
}

