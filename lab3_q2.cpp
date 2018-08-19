//include the library
#include<iostream>
#include<string>
using namespace std;
// introduce the main function
int main ()
{
	// create a program which asks user's name and welcomes him
	string name;
	cout<<"Hello, what's your name?"<<endl;
	cin>>name;
	cout<<"welcome "<<name<<endl;
	cout<<"lets get started with some arithmetics"<<endl;
	//make a program using arithmetic functions for integers
	// introduce the variables
	int a,b;
	cout<<"let's get started using some integers"<<endl;
	cout<<"enter two integers";
	//get input in the variables
	cin>>a;
	cin>>b;
	// introduce the functions using the variables
	int sum=a+b,subtraction1=a-b,subtraction2=b-a,multiplication=a*b,quotient1=a/b,quotient2=b/a,remainder1=a%b,remainder2=b%a;
	// display the results using variable inputs in the arithmetic functions
	cout<<"the summation of the two intergers is :"<<sum<<endl;
	cout<<"the subtraction result when the second integer is subtracted from the first :"<<subtraction1<<endl;
	cout<<"the subtraction result when the first integer is subtracted from the second :"<<subtraction2<<endl;
	cout<<"The result when the two integers are multiplied :"<<multiplication<<endl;
	cout<<"The quotient when the first integers gets divided by the second :"<<quotient1<<endl;
	cout<<"The quotient when the second integers gets divided by the first :"<<quotient2<<endl;
	cout<<"The remainder when the first integers gets divided by the second :"<<remainder1<<endl;
	cout<<"The remainder when the second integers gets divided by the first :"<<remainder2<<endl;
	// make a program using arithmetic functions for small decimal numbers
	// follow the same steps the as previous program but using float function instead of int
	float c,d;
	cout<<"let's get started using some small decimal numbers"<<endl;
	cout<<"enter two small decimal numbers"<<endl;
	cin>>c;
	cin>>d;
	float fsum=c+d,fsubtraction1=c-d,fsubtraction2=d-c,fmultiplication=c*b,fquotient1=c/d,fquotient2=d/c;
	cout<<"the summation of the two numbers is :"<<fsum<<endl;
	cout<<"the subtraction result when the second number is subtracted from the first :"<<fsubtraction1<<endl;
	cout<<"the subtraction result when the first number is subtracted from the second :"<<fsubtraction2<<endl;
	cout<<"The result when the two numbers are multiplied :"<<fmultiplication<<endl;
	cout<<"The quotient when the first number gets divided by the second :"<<fquotient1<<endl;
	cout<<"The quotient when the second number gets divided by the first :"<<fquotient2<<endl;
	// make a program using arithmetic functions for small decimal numbers
	// follow the same steps the as previous program but using double function instead of float
	double e,f;
	cout<<"let's get started using some big decimal numbers"<<endl;
	cout<<"enter two big decimal numbers"<<endl;
	cin>>e;
	cin>>f;
	double dsum=e+f,dsubtraction1=e-f,dsubtraction2=f-e,dmultiplication=e*f,dquotient1=e/f,dquotient2=f/e;
	cout<<"the summation of the two numbers is :"<<dsum<<endl;
	cout<<"the subtraction result when the second number is subtracted from the first :"<<dsubtraction1<<endl;
	cout<<"the subtraction result when the first number is subtracted from the second :"<<dsubtraction2<<endl;
	cout<<"The result when the two numbers are multiplied :"<<dmultiplication<<endl;
	cout<<"The quotient when the first number gets divided by the second :"<<dquotient1<<endl;
	cout<<"The quotient when the second number gets divided by the first :"<<dquotient2<<endl;
	// return the main function
return 0;
}
