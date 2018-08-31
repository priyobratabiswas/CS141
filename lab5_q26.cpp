// To create a c++ programme to print all odd numbers between 1 to 100
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
	cout<<"lets get started, we will be finding out to print all odd numbers between 1 to 100"<<endl;
// declare the variable,	
	int i=1;
	cout<<"let's get started "<<endl;

	while (i<=100)
	{
	if (i==2) {cout<<"All odd numbers between 1 to 100 are listed below-"<<endl;}
		if (i%2==0){
				i++;}
		else {cout<<i<<endl;
			i++;}
	}
// return the main function
	return 0;
}
