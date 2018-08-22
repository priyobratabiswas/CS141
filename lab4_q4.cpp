#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int main ()
{
	string NAME;
	cout<<"Hello"<<endl;
	cout<<"What's your name?"<<endl;
	getline(cin,NAME),
	cout<<"Welcome "<<NAME<<endl;
	cout<<"let's get started"<<endl;
	cout<<"We will be converting number of days into its corresponding value in weeks, months and years"<<endl;
	double d;
	cout<<"please enter the number of days which you want to convert"<<endl;
	cin>>d;
	double week=d/7,month=d/30,year=d/365;
	cout<<"The coressponding value of number of "<<d<<" days in weeks is "<<setprecision(9)<<week<<endl;
	cout<<"The coressponding value of number of "<<d<<" days in months is "<<setprecision(9)<<month<<endl;
	cout<<"The coressponding value of number of "<<d<<" days in years is "<<setprecision(9)<<year<<endl;
	return 0;
}

