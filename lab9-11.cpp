//11. Write a program to declare variables of all predefined sizes and declare corresponding pointers (of all predefined types). Print out the sizes of each of variables and pointer variables. (Hint: use sizeof )
#include<iostream>
#include<cstring>
using namespace std;

int main()
{



	bool b;	
	char c;
	int i;
	float f;
	double d;

	bool*p1;char*p2;int*p3;float*p4;double*p5;char*p6;
	p1=&b;
	p2=&c;
	p3=&i;
	p4=&f;
	p5=&d;
	
	
	cout<<"The size of bool variable is "<<sizeof(b)<<endl;
	cout<<"The size of char variable is "<<sizeof(c)<<endl;
	cout<<"The size of int variable is "<<sizeof(i)<<endl;
	cout<<"The size of float variable is "<<sizeof(f)<<endl;
	cout<<"The size of double variable is "<<sizeof(d)<<endl;
	//cout<<"The size of void variable is "<<sizeof(v)<<endl;
	cout<<"The size of all pointers to bool are "<<sizeof(p1)<<endl;
	cout<<"The size of all pointers to char are "<<sizeof(p2)<<endl;
	cout<<"The size of all pointers to int are "<<sizeof(p3)<<endl;
	cout<<"The size of all pointers to float are "<<sizeof(p4)<<endl;
	cout<<"The size of all pointers to double are "<<sizeof(p5)<<endl;


	return 0;
}
