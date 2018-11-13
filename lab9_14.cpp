#include<iostream>
#include<cstring>
using namespace std;
int main()
{
//creating the string
	string str;
	cout<<"enter the string"<<endl;
//capturing the string
	getline(cin,str);
//printing by normal index method
	cout<<"the string by normal index method"<<endl;
	for(int i=0;str[i]!='\0';i++)
	{
		cout<<str[i];
	}
	cout<<endl;
//copying the string to a character array
	char arr[50];
	for(int i=0;str[i]!='\0';i++)
	{
		arr[i]=str[i];
	}
//declaring the pointer
	char*chptr;
	chptr=arr;
//printing the string (character array) by pointer method
	cout<<"the string by pointer method"<<endl;
	while(*chptr!='\0')
	{
		cout<<*chptr;
		chptr++;
	}
	cout<<endl;
	return 0;
}
