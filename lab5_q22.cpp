// To create a c++ programme to print all natural number from 0 to n
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
	cout<<"lets get started, we will be finding out to print all natural number from 0 to n"<<endl;
// declare the variable,	
	int i=0,n;
	cout<<"let's get started "<<endl;
	cout<<"please enter the value of 'n' upto which natural numbers from 0 will be shown"<<endl;
	cin>>n;
	
	while (i<=n)
	{
		if (i<1){cout<<"All natural numbers from 0 to "<<n<<" are listed below"<<endl;
		}
		cout<<i<<endl;
		i++;
	}
// return the main function
	return 0;
}
