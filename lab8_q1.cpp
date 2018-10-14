/*
1. Write a program to find sum of all elements of an array. (Use functions)
2. Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)
3. Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int k), similarly for smallest)
4. Write a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each)
*/
#include<iostream>
using namespace std;
//introductory function and taking the value of the number of numbers to add
void intro(int &a)
{
	cout<<"Hello , we are going to find the sum of numbers specified by you."<<endl;
	cout<<"please enter the number of numbers which you want to find out the sum"<<endl;
	cin>>a;
}
// function to take values in array
void takevalue(int myarray[],int &n)
{
	cout<<"enter the numbers(kepp pressing enter after each number)"<<endl;
	for(int b=0;b<=(n-1);b++)
	{	
		cin>>myarray[b];
	}
}


//function to add
void sum(int myarray[],int &c,int &n){
	cout<<"enter the numbers(kepp pressing enter after each number)"<<endl;
	for(int z=0;z<=(n-1);z++)
	{	
		c=c+myarray [z];
	}
}
//take one element from each array and asdd them
// driver function
int main()
{
	int n;
	intro(n);
	int myarray[n];
	takevalue(myarray,n);
	int c=0;
	sum(myarray,c,n);
	cout<<"the sum of the numbers you entered is "<<c<<endl;
}
