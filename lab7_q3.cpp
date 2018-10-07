//3. Write a C++ program to print all even or odd numbers in given range using recursion.
#include<iostream>
#include<cstdlib>
using namespace std;
//intro function
void intro(int &a)
{
	cout<<"Hello , we are going to print natural numbers from 1 to n."<<endl;
	cout<<"please enter the number upto which you want to print natural numbers"<<endl;
	cin>>a;
} 
//printing odd function
void printo(int b,int &c)
{//when to print
	if(b%2==1)
	{
		cout<<b<<endl;
		b++;
	
//statement of control
		if(b>c)
		{
			return;
		}
		else
		{
			printo(b,c);
		}
	}
	else
	{
		b++;
		printo(b,c);
	}
}
//printing even function
void printe(int b,int &c)
{//when to print
	if(b%2==0)
	{
		cout<<b<<endl;
		b++;
	
//statement of control
		if(b>c)
		{
			return;
		}
		else
		{
			printe(b,c);
		}
	}
	else
	{
		b++;
		printe(b,c);
	}
}
//driver function
int main()
{
	int a;
	intro(a);
	cout<<"the odd natural numbers upto the input range "<<a<<" is-"<<endl;
	printo(1,a);
	cout<<"the even natural numbers upto the input range "<<a<<" is-"<<endl;
	printe(1,a);
	return 0;
}
