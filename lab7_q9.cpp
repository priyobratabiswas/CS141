//9. Write a C++ program to find factorial of any number using recursion.
#include<iostream>
#include<cstdlib>
using namespace std;
//intro function
void intro(int &a)
{
	cout<<"Hello , we are going to print factorial of any number n."<<endl;
	cout<<"please enter the number of which you want the factorial"<<endl;
	cin>>a;
} 
//function for the factorial
void fact(int a,int &b)
{
	b=b*a;
	a--;
	if (a==0)
	{
		return;
	}
	else
	{
		fact(a,b);
	}
}
//driver funtion
int main()
{
	int a,b=1;
	intro(a);
	fact(a,b);
	cout<<"The factoirial of "<<a<<" is "<<b<<endl;
	return 0;
}


