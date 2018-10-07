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
void rev(int &a)
{
/*logic
12345
54321
so 1st remainder-1st digit to print*/
	int b;
	b=a%10;
	//print the result
	cout<<b;
	a=a/10;
	//run or stop condition
	if(a==0)
	{
		cout<<endl;
		return;
	}
	else
	{
		rev(a);
	}
}
//driver function
int main()
{
	int a;
	intro(a);
	rev(a);
	return 0;
}

