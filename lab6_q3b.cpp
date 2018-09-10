//To code for a function that takes two int parameters, adds them together, then returns the maximum.
// include the library
#include<iostream>
#include<cstring>
// use the namespace
using namespace std;
//default value
//call function by value
void tosumR(int d,int c,int &e){
	if (d>c)// finds the maximum
		{e=d;}
	else if (c>d) 
		{e=c;}
}
 
	



// driver function
int main (){
//driver function that sums the two input numbers
//say hello
	cout<<"Hello"<<endl;
	cout<<"let's get started, we will be finding maximum among two numbers and adding those two numbers"<<endl;
	int a,b,max;
	cout<<"enter two numbers whoose sum you want"<<endl;
	cin>>a;
	cin>>b;
	tosumR(a,b,max);
	cout<<"The maximum among two inputs is "<<max<<endl;
	return 0;
}
