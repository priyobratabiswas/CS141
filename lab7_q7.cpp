//7. Write a C++ program to check whether a number is palindrome or not using recursion.
//6. Write a C++ program to find reverse of any number using recursion.
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
	c=(c*10)+b;
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
//function to compare the numbers
void comp(int &a,int &b)
{
	if(a==b)
	{
		cout<<"The number which you entered is a palindrome"<<endl;
	}
	else
	{
		cout<<"The number which you entered is not a palindrome"<<endl;
	}
} 
//driver function
int main()
{
	int a,b;
	intro(a);
	b=rev(a,0);
	cout<<"the reverse number is-"<<b<<endl;
	comp(a,b);
	return 0;
}

