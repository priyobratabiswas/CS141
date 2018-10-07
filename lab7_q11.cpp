//11. Write a C++ program to find GCD (HCF) of two numbers using recursion.
//to create a function that asks the user to give the input
#include<iostream>
using namespace std;
void intro(int &a,int &b)
{
	cout<<"Hello , we are going to find the G.C.D between two numbers specified by you."<<endl;
	cout<<"please enter first the number"<<endl;
	cin>>a;
	cout<<"please enter the second number"<<endl;
	cin>>b;
}
//g.c.d function
int gcd(int a,int b)
{
	if(b==0)
	{
	return a;
	}
	else
	{	if(a>b)
		{
			gcd(b,a%b);
		}
		else if(b>a)
		{
			gcd(a,b%a);
		}
		else
		{	return a;
		}
	}
}
//driver funtion
int main ()
{
	int a,b,c;
	intro(a,b);
	if((a==0)&&(b==0))
	{
		cout<<"inputs are invalid for operating GCD"<<endl;
		return 0;
	}
	c=gcd(a,b);
	cout<<"The G.C.D. of "<<a<<" and "<<b<<" is "<<c<<endl;
	return 0;
}
 
