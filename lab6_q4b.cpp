//To code for a function that takes two int parameters, then returns the minimum.
// include the library
#include<iostream>
#include<cstring>
// use the namespace
using namespace std;
//default value
//call function by value
void tosumR(int d,int c,int &e){
	if (d<c)// finds the minimum
		{e=d;}
	else if (c<d) 
		{e=c;}
}
 
	



// driver function
int main (){
//driver function that sums the two input numbers
//say hello
	cout<<"Hello"<<endl;
	cout<<"let's get started, we will be finding minimum among two numbers which you will specify"<<endl;
	int a,b,min;
	cin>>a;
	cin>>b;
	tosumR(a,b,min);
	cout<<"The minimum among two inputs is "<<min<<endl;
	return 0;
}
