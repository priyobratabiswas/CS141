/*
2. Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)
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

// function for smallest
int findsmallestelement(int arr[], int n){
 int high= arr[0];
   for(int i=0; i<n; i++) {
      if(high>arr[i]) {
         high=arr[i];
      }
   }
return high;}

//greatest element function
int findgreatestelement(int arr[],int n)
{
	int low=arr[0];
	for(int i=0; i<n; i++)
	{ 
		if(low<arr[i])
		{	
			low=arr[i];
		}
	}
	return low;
}
//mean function
int mean(int arr[],int n)
{
	int s=0;
	double m;
	for(int i=0; i<n; i++)
	{ 
		s=s+arr[i];
	}
	m=(s/n);
	return m;
}
/*
*to arrange
*to swap
284 to 248
if 1st greater then 2nd
then 2nd positon has first and 1st has second's value.
*/
void swap(int arr[],int &n)
{
	int t;
	for(int i=0;i<n;i++)
	{	for(int j=i+1;j<n;j++)
		{	if(arr[i]>arr[j])
			{	t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
}
//median
int median(int arr[],int n)
{
	double r;
	if (n%2==0)
	{	r=((arr[n/2] + arr[(n+2)/2])/2);
		return r;
	}
	else
	{	r=arr[(n-1)/2];
		return r;
	}
}
/* to find frequency of all elements
1.count the number of times one element is there
2.record it.
3.do for all
4.compare as if in an array
5.find max number
6.coout the number and cout the frequency*/
int frequency(int arr[], int n) 
{
	int ct=0,cnt=1,tp;
	for(int i=0;i<(n);i++)
	{
		if(arr[i]==arr[i+1])
	 	{
			cnt++;
		}
		else 
		{
			if(cnt>ct)
			{
				ct=cnt;
				tp=arr[i];
			}
			cnt=1;
		}
	}
	if(ct>1)
	{
		cout<<"the maximum frequency is of "<<tp<<" and is "<<ct<<endl;}
	else
	{
		cout<<"all elements are distinct"<<endl;
	}
	return 0;
}
//driver function
int main()
{
	int n;
	intro(n);
	int myarray[n];
	takevalue(myarray,n);
	int g;
	g=findgreatestelement(myarray,n);
	cout<<"the greatest elements of the array is"<<g<<endl;
	int f;
	f=findsmallestelement(myarray,n);
	cout<<"the smallest element of the array is"<<f<<endl;
	int h;
	h=mean(myarray,n);
	cout<<"the mean of the elements of the array is"<<h<<endl;
	swap(myarray,n);
	int m;
	m=median(myarray,n);
	cout<<"the median of the elements of the array is"<<m<<endl;
	frequency(myarray,n);
	cout<<"thank you"<<endl;
}
	




















     



 
