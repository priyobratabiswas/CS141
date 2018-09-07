// To create a c++ programme which displays a hollow square with diagonals of stars.
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
//start the process for making a hollow square with diagonals
//enter the value of side stars
	int n;
	cout<<"Please specify the number of stars you want as the side"<<endl;
	cin>>n;
//Print the hollow square with diagonals
//print the sides
//loop for the rows
	for(int i=1;i<=n;i++){
// loop for columns
		for(int j=1;j<=n;j++){
//print the 1st and last side
			if(i==1||i==n){			
				cout<<"*";
			}
// print the anterior and posterior sides
			else if (j==1||j==n){
				cout<<"*";
				}
//print the diagonals
//find the relation between stars and spaces where stars are printed.
			else if (i==j||i==(n-j+1))
				{
				cout<<"*";
				}
			else {cout<<" ";}
		}
//break the line
		cout<<endl;

	}
	return 0;
}

