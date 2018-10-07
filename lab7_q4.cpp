//4. Write a C++ program to find sum of all natural numbers between 1 to n using recursion.
#include<iostream>
#include<cstdlib>
using namespace std;
//intro function
void intro(int &a)
{
	cout<<"Hello , we are going to print sum of natural numbers from 1 to n."<<endl;
	cout<<"please enter the number upto which you want to print natural numbers"<<endl;
	cin>>a;
} 
//printing function
int sum(int b,int e,int &c)
{
	if(b>c)
	{
		return e;
	}
	else
	{
		e=e+b;
		b++;
		sum(b,e,c);
	}

}
//driver function
int main()
{
	int a,b;
	intro(a);
	b=sum(1,0,a);
	cout<<"the sum of natural numbers upto "<<a<<" is- "<<b<<endl;
	return 0;
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
