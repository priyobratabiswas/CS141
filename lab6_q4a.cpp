//To code for a function that takes two int parameters,then returns the minimum.
// include the library
#include<iostream>
#include<cstring>
// use the namespace
using namespace std;
//default value
//call function by value
int tomin(int d,int c){
	if (d<c)
		{return d;}
	else if (c<d) 
		{return c;}
}
 
	



// driver function
int main (){
//driver function that sums the two input numbers
//say hello
	cout<<"Hello"<<endl;
	cout<<"let's get started, we will be finding minimum among two numbers which you will enter"<<endl;
	int a,b,min;
	cout<<"enter two numbers among whom you want to determine the minimum one"<<endl;
	cin>>a;
	cin>>b;
	min=tomin(a,b);
	cout<<"The minimum among two inputs is "<<min<<endl;
	return 0;
}
