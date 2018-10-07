//8. Write a C++ program to find sum of digits of a given number using recursion.
#include<iostream>
#include<cstdlib>
using namespace std;
//intro function
void intro(int &a)
{
	cout<<"Hello , we are going to print reverse of any integer number you enter"<<endl;
	cout<<"please enter the number which you want to reverse"<<endl;
	cin>>a;
} 
//code the function to reverse the function
int rev(int a,int c)
{
/*logic
12345
54321
so 1st remainder-1st digit to print*/
	int b;
	b=a%10;
	//forming the number
	c=c+b;
	a=a/10;
	//run or stop condition
	if(a==0)
	{
		return c;
	}
	else
	{
		rev(a,c);
	}
}

//driver function
int main()
{
	int a,b;
	intro(a);
	b=rev(a,0);
	cout<<"the sum of digits of the number is-"<<b<<endl;
	return 0;
}

