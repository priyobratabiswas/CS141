// To create a c++ programme which displays a parallelogram of stars.
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
	cout<<"lets get started, we will be drawing parallelograms of stars."<<endl;
//start the process for making squares
//declare the variables
	int i,j,m,n;
	cout<<endl;
	cout<<"Please specify the number of stars you want as the side"<<endl;
	cin>>n;
	cout<<"here's your parallelogram"<<endl;
// print spaces and stars
// indicate the number of rows
	for(i=1;i<=n;i++){
//inidcate the spaces 
		for(j=(n-i);j>=1;j--){
			cout<<" ";
		}
//indicate the number of stars
		for(m=1;m<=n;m++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
