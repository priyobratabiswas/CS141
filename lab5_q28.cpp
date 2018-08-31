// To create a c++ programme to add all natural numbers in between 0 upto the number which user specifies
#include<iostream>
#include<string>
// using namespace
using namespace std;
// introduce the main function
int main ()
{
// create a programme that asks user's name and welcomes him
	string name;
	cout<<"Hello, what's your name?"<<endl;
	cin>>name;
	cout<<"welcome "<<name<<endl;
	cout<<"lets get started, we will be finding addition value of all even numbers in between 0 upto the number which you specify"<<endl;
//declare the variables
	int i=1,n;
// ask the user to enter the value of n
	cout<<"let's get started "<<endl;
	cout<<"Please enter the number upto which you want all the even numbers to be added"<<endl;
	cin>>n;
// declare the variables
	int SUM;
	SUM=0;
// do the loop
	while (i<=n)
	{
	
		if (i%2==0){
		SUM=SUM+i;
		i++;}
		else {i++;}
	}

// print the result
	cout<<"Addition value of all even numbers in between 0 and "<<n<<" is-"<<endl;
	cout<<SUM<<endl;
// return the main function
	return 0;
}
