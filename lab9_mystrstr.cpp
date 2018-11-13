//strstr
#include<iostream>
#include<cstring>
using namespace std;
char*mystrstr(char*arr,char*arr1){
	char*position;
	while(*arr != *arr1){
		arr++;
		}
		return arr;
}
int main()
{	
	
	cout<<"enter the first array"<<endl;
	char arr[50];
	cin>>arr; 
	char arr1[50];
	cout<<"enter the part which you want to find out"<<endl;   
	cin>>arr1;
	char*g; 
	g=mystrstr(arr,arr1);
	if(g){
	cout<<"the first occurence of "<<arr1<<" in "<<arr<<" is "<<g<<endl;
	}
	else
	{
		cout<<"strings are equal"<<endl;}
	//g=length(arr);
	return 0;
}
//mystrcat
// adds two strings

