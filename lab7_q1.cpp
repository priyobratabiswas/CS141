/*
1. Write a C++ program to find power of any number using recursion.
*/
#include<iostream>
#include<cstdlib>
using namespace std;
/* a^b=a*a^b-1*/
//to create a function that asks the user to give the input
void intro(int &a,int &b)
{
	cout<<"Hello , we are going to find the power of a number specified by you."<<endl;
	cout<<"please enter the number of which you want to find out the power"<<endl;
	cin>>a;
	cout<<"please enter what power of the number you want( make sure the power be an integer)"<<endl;
	cin>>b;
} 
//we have to determine the the function that multiplies a with every previous integer to get the power up to n 
int power(int d,int f,int e,int g)
{
	//d is the mother number, and f is the power number
	//multipler
	if (g<=f)
	{	e=e*d;
		g++;
		e=power(d,f,e,g);
	}
	else 
	{
	return e;
	}	
}
//find the driver function
int main()
{
	int a,b,c,d;
//call the function to find out a& b
	intro(a,b);
//find a^b
	c=power(a,b,1,1);
	cout<<"the "<<b<<"th power of "<<a<<" is "<<c<<endl;
	return 0;
}


