//2. Write a C++ program to print all natural numbers between 1 to n using recursion.
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
//printing function
void print(int b,int &c)
{
	cout<<b<<endl;
	b++;
	if(b>c)
	{
		return;
	}
	else
	{
		print(b,c);
	}

}
//driver function
int main()
{
	int a;
	intro(a);
	cout<<"the natural numbers upto "<<a<<" is-"<<endl;
	print(1,a);
	return 0;
}
