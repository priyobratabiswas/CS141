// To create a c++ programme to print all natural number from n to 0
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
	cout<<"lets get started, we will be finding out to print all natural number from n to 0"<<endl;
// declare the variable,	
	int i,n;
	cout<<"let's get started "<<endl;
	cout<<"please enter the value of 'n' from which natural numbers upto 0 will be shown"<<endl;
	cin>>n;
	i=n;
	
	while ((i<=n)&&(i>=0))
	{
		if (i==n){cout<<"All natural numbers from "<<n<<" to 0 are listed below"<<endl;
		}
		cout<<i<<endl;
		i=i-1;
	}
// return the main function
	return 0;
}
