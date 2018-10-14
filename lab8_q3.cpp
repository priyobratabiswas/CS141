/*
3. Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int k), similarly for smallest)
*/
//ASSUMING THE ARRAY CONTAINS ALL DISTINCT ELEMENTS.
//assuming the array to be arranged
//function for smallest element
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
	cout<<"enter the numbers(kepp pressing enter after each number){ALL ELEMENTS SHOULD BE DISTINCT}"<<endl;
	for(int b=0;b<=(n-1);b++)
	{	
		cin>>myarray[b];
	}
}
//arranging function
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
//function to take value k
void valuek(int &k)
{
	cout<<"to find the kth largest, kth smallest element of your array, please enter the value of k"<<endl;
	cin>>k;
}
//function to display kth greatest number
void bigandsmall(int arr[],int &n,int &k)
{
	cout<<"the "<<k<<"th greatest element is "<<arr[(n-k)]<<endl;
	cout<<"the "<<k<<"th smallest element is "<<arr[(k-1)]<<endl;
}

int main()
{
	int n;
	intro(n);
	int myarray[n];
	takevalue(myarray,n);
	swap(myarray,n);
	//function to take k
	int k;
	valuek(k);
	//function for displaying kth greatest and kth smallest number
	bigandsmall(myarray,n,k);
	cout<<"thank you"<<endl;
}
	


