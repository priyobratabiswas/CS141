// include the library
#include<iostream>
#include<cstring>
// use the namespace
using namespace std;
//default value
//call function by reference
int tosum(int a,int b){
	int sum;
	sum=a+b;
	return sum;
}



// driver function
int main (){
//driver function that sums the two input numbers
//say hello
	cout<<"Hello"<<endl;
	cout<<"let's get started, we will be adding to numbers"<<endl;
//declare the variables
	int a,b,sum;
	cout<<"enter two numbers whoose sum you want"<<endl;
	cin>>a;
	cin>>b;
	sum = tosum(a,b);
	cout<<"The added value of two inputs is: "<<sum<<endl;
	return 0;
}
