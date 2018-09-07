// To create a c++ programme which displays a hollow square of stars.
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
	cout<<"lets get started, we will be drawing hollow squares of stars."<<endl;
//start the process for making squares
//declare the variables
	int i,j,n;
	cout<<endl;
	cout<<"Please specify the number of stars you want as the side"<<endl;
	cin>>n;
	for (i=1;i<=n;i++){
//find the spacing
//print the spacing before the star and spacing
		for(int k=(n-i);k>0;k--){
			cout<<" ";
		}
//print the first and last row
		if (i==1 || i==n)
		{ for (j=1;j<=n;j++)
			{cout<<"*";}}
// print the hollow rows
		else
		{
			cout<<"*";
			for (j=1;j<=(n-2);j++)
			{cout<<" ";
			}
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

