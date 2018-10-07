//5. Write a C++ program to find sum of all even or odd numbers in given range using recursion.
#include<iostream>
#include<cstdlib>
using namespace std;
//intro function
void intro(int &a)
{
	cout<<"Hello , we are going to print sum of natural numbers from 1 to n."<<endl;
	cout<<"please enter the number upto which you want to print odd and even natural numbers"<<endl;
	cin>>a;
} 
//sum function for odd numbers
int sumo(int b,int e,int &c)
{
	if(b%2==1)
	{
		if(b>c)
		{
			return e;
		}
		else
		{
			e=e+b;
			b++;
			sumo(b,e,c);
		}
	}
	else
	{
		b++;
		sumo(b,e,c);
	}

}
//sum function for even numbers
int sume(int b,int e,int &c)
{
	if(b%2==0)
	{
		if(b>c)
		{
			return e;
		}
		else
		{
			e=e+b;
			b++;
			sume(b,e,c);
		}
	}
	else
	{
		b++;
		sume(b,e,c);
	}

}
//driver function
int main()
{
	int a,b,c;
	intro(a);
	b=sumo(1,0,a);
	c=sume(1,0,a);
	cout<<"the sum of odd natural numbers upto "<<a<<" is- "<<b<<endl;
	cout<<"the sum of even natural numbers upto "<<a<<" is- "<<c<<endl;
	return 0;
}
