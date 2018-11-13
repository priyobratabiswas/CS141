/* strchr */

#include<iostream>
#include<cstring>
using namespace std;
char*mystrchr(char*arr,char b){
	char*position;
	while(*arr !=b){
		arr++;}
		return ++arr;
}
int main()
{	
	
	cout<<"enter the array"<<endl;
	char arr[50];
	cin>>arr; 
	char b;
	cout<<"enter the character"<<endl;   
	cin>>b;
	char*g; 
	g=mystrchr(arr,b);
	cout<<"the position of "<<b<<" is "<<(g-arr)<<endl;
	//g=length(arr);
	return 0;
}
//mystrcat
// adds two strings

