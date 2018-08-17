// include the library
#include<iostream>
using namespace std;
// write the main function
int main ()
// declare the variables and assign thier values lab3_q1
{
int a=3;
char b='j';
float c=5.23;
double d=2.111113;
bool statement= (4==0);
// display the size and values of the function
	cout<<"size of integer :"<< sizeof(a) <<"bits"<<" and The value of integer is:"<<a<<endl;
	cout<<"size of character :"<< sizeof(b) <<"bits"<<" and the value of character is:"<<b<<endl;
	cout<<"size of float :"<< sizeof(c)<<"bits"<<" and the value of float is:"<<c<<endl;
	cout<<"size of big decimals :"<< sizeof(d)<<"bits"<<" and the value of the big decimal is:"<< d<<endl;
	cout<<"size of the bool :"<< sizeof(statement)<<"bits"<<" and the value of the bool statement is:"<<statement<<endl;
return 0;
}
