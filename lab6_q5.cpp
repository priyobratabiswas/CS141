// To Write a program that includes the sum ,maximum and minimum functions. Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output. 
// include the library
#include<iostream>
#include<cstring>
// use the namespace
using namespace std;
//default value
//call sum function by value
int tosum(int a,int b){
	int sum;
	sum=a+b;
	return sum;
}
//call max function by value
int tomax(int c,int d){
	if (c>d)
		{return c;}
	else if (d>c) 
		{return d;}
}
 
//call  min function by value
int tomin(int e,int f){
	if (e<f)// finds the minimum
		{return e;}
	else if (f<e) 
		{return f;}
}
// driver function
int main (){
//driver function that sums the two input numbers
//say hello
	cout<<"Hello"<<endl;
	cout<<"let's get started, we will be finding maximum among two numbers and adding those two numbers"<<endl;
	int a,b;
	cout<<"enter two numbers with whom you want to get sum or max or min"<<endl;
	cin>>a;
	cin>>b;
	int s,mx,mn;
	s=tosum(a,b);
	mx=tomax(a,b);
	mn=tomin(a,b);
	int input;
	cout<<"So, what do you want to perform?"<<endl;
	cout<<"If you want to perform sum write 1."<<endl;
	cout<<"If you want to find the maximun enter 2."<<endl;
	cout<<"If you want to perform minimum enter 3."<<endl;
	cin>>input;
	if(input==1)
		{cout<<"The added value of two inputs is: "<<s<<endl;}
	else if(input==2)
		{cout<<"The maximum among two inputs is "<<mx<<endl;}
	else if(input==3)
		{cout<<"The minimum among two inputs is "<<mn<<endl;}
	else 
		{cout<<"404 ERROR:CODE NOT FOUND"<<endl;}
return 0;
}
 
