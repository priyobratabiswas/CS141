//11. Write a C++ program to find L.C.M. of two numbers using recursion.
//to create a function that asks the user to give the input
#include<iostream>
using namespace std;
void intro(int &a,int &b)
{
	cout<<"Hello , we are going to find the l.c.m. of two numbers specified by you."<<endl;
	cout<<"please enter first the number"<<endl;
	cin>>a;
	cout<<"please enter the second number"<<endl;
	cin>>b;
}
//g.c.d function
int lcm(int a,int b,int i,int l)
{		l=a*i;
		i++;
	if((l%a==0)&&(l%b==0))
	{
		return l;
	}
	else
	{
		lcm(a,b,i,l);
	}
}
//driver funtion
int main ()
{
	int a,b,c;
	intro(a,b);
	if((a==0)&&(b==0))
	{
		cout<<"inputs are invalid for operating L.C.M."<<endl;
		return 0;
	}
	c=lcm(a,b,1,1);
	cout<<"The L.c.m. of "<<a<<" and "<<b<<" is "<<c<<endl;
	return 0;
}
 
