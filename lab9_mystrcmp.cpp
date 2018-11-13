/*
strcmp
*/
#include<iostream>
#include<cstring>
using namespace std;
int length(char arr[]){
int i=0;
while(arr[i] !='\0'){
i++;}
cout<<"the length of the array is "<<(i+1)<<endl;}
int main()
{	
	
	cout<<"enter the array"<<endl;
	char arr[50];
	cin>>arr;
	int g; 
	g=length(arr);
	return 0;
}
//mystrcat
// adds two strings


