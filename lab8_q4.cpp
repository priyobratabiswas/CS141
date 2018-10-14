/*4. Write a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each)*/
#include<iostream>
using namespace std;
//introductory function and taking the value of the number of numbers to add
void intro(int &a)
{
	cout<<"Hello , we are going to find the sum of numbers specified by you."<<endl;
	cout<<"please enter the number of numbers of your array"<<endl;
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
//function to merge two arrays
void merge(int arr1[],int arr2[], int narr[],int &n,int&m)
{
for(int i=0;i<n;i++)
{ narr[i]=arr1[i];}
for(int j=0;j<m;j++)
{ narr[(n+j)]=arr2[j];}
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


int main()
{
int n,m;
cout<<"your 1st array has to be entered"<<endl;
intro(n);
int arr1[n];
takevalue(arr1,n);
cout<<"your 2nd array has to be entered"<<endl;
intro(m);
int arr2[m];
takevalue(arr2,m);
int l=(m+n);
int newarr[l];
//merge
merge(arr1,arr2,newarr,n,m);
int o,p;
o=findgreatestelement(newarr,l);
p=findsmallestelement(newarr,l);
cout<<"the smallest element of two arrays is"<<p<<endl;
cout<<"the greatest element of two arrays is"<<o<<endl;
return 0;
}
