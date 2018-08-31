// To create a c++ programme which finds the maximun between three numbers
// include the library
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
	cout<<"lets get started, we will be finding out the maximum between three numbers"<<endl;
// declare the variables	
	double a,b,c;
	cout<<"let's get started using some numbers"<<endl;
	cout<<"enter three numbers"<<endl;
// get input in the variables
	cin>>a;
	cin>>b;
	cin>>c;
// give the conditions
 	if (( a>b )&&( a>c ))
		{cout<<a<<" is greater than "<<b<<" and "<<c<<endl;}
	else if (( b>a )&&( b>c ))
		{cout<<b<<" is greater than "<<a<<" and "<<c<<endl;}
	else if (( c>a )&&( c>b ))
		{cout<<c<<" is greater than "<<b<<" and "<<a<<endl;}
	else if (( c==b)&&( c>a))
		{cout<<"both "<<b<<" and "<<c<<" are equal and they are greater than "<<a<<endl;}
	else if (( a==c)&&( c>b ))
		{cout<<"both "<<a<<" and "<<c<<" are equal and they are greater than "<<b<<endl;}
	else if (( a==b )&&( a>c ))
		{cout<<"both "<<a<<" and "<<b<<" are equal and they are greater than "<<c<<endl;}
	else if (( c==b )&&( c<a ))
		{cout<<"both "<<b<<" and "<<c<<" are equal and they are lesser than "<<a<<endl;}
	else if (( a==c )&&( c<b ))
		{cout<<"both "<<a<<" and "<<c<<" are equal and they are lesser than "<<b<<endl;}
	else if (( a==b )&&( a<c))
		{cout<<"both "<<a<<" and "<<b<<" are equal and they are lesser than "<<c<<endl;}
	else 
		{cout<<"All the numbers are equal "<<endl;}
// return the main function
	return 0;
}
