//10. Write a C++ program to generate nth Fibonacci term using recursion.
#include<iostream>
#include<cstdlib>
using namespace std;
//intro function
void intro(int &a)
{
	cout<<"Hello , we are going to print fibonacci statement upto any number n."<<endl;
	cout<<"please enter the number of which you want the fibonacci statement"<<endl;
	cin>>a;
}
//function to create the fibbonacci
void fibbo(int n,int a,int b,int c)
{
	cout<<b<<", ";
	a=b;
	b=c+b;
	c=a;
	if(b>n)
	{
		cout<<endl;
		return;
	}
	else
	{
		fibbo(n,a,b,c);
	}
}
//driver function 
int main()
{
	int a;
	intro(a);
	fibbo(a,0,1,0);
	return 0;
}
