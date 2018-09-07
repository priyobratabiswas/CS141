// To create a c++ programme which displays a square of stars.
// include the library
#include<iostream>
#include<cstring>
// using namespace
using namespace std;
// introduce the main function
int main ()
{
// create a programme that asks user's name and welcomes him
	string name;
	cout<<"Hello, what's your name?"<<endl;
	cin>>name;
	cout<<"welcome "<<name<<" sir"<<endl;
	cout<<"lets get started, we will be drawing squares of stars."<<endl;
//start the process for making squares
//declare the variables
	int i,j,n;
	cout<<endl;
	cout<<"Please specify the number of stars you want as the side"<<endl;
	cin>>n;
	cout<<"here's your square"<<endl;
		for (i=1;i<=n;i++)
		{	for(j=1;j<=n;j++)
			{
				cout<<"*";
			}
			cout<<endl;
		}
	return 0;
}

