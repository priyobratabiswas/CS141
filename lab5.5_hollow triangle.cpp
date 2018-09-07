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
	cout<<"lets get started, we will be drawing equilateral triangles of stars."<<endl;
	int n;
	cout<<"please specify the length of side of the required triangle"<<endl;
	cin>>n;
	int z=1;
//triangle drawing
//introduce the number of rows
	for(int i=1;i<=n;i++){
//space-star-space-star concept
//specify the first spaces
		for(int k=(n-i);k>0;k--){
			cout<<" ";}
//specify the  first and second stars

		if (i==1){cout<<"*";}
//specify the  second spaces
		else if((i<=(n-1))&&(i>1))
			{cout<<"*";
			for(int f=2;f<z;f++){
				cout<<" ";}
			cout<<"*";
			}
		else if(i==n)
			{for (int y=1;y<=n;y++)
			{cout<<"* ";}}
		z=z+2;
		cout<<endl;
	}
	return 0;
}

