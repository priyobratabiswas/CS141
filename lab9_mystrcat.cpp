/*strcat*/
#include<iostream>
#include<cstring>
using namespace std;
char*mystrcat(char*string1,char*string2)
{
	char arr[100];
	
	char *add=arr;
	cout<<string1<<endl;
	while(*string1 !='\0'){
		*add = *string1;
		string1++;
		add++;	
	}
	while(*string2!='\0'){
		*add = *string2;
		string2++;
		add++;
	}
	*add = '\0';
	cout<<"the added array is "<<arr<<endl;
}
int main()
{	
	int b,c;
	/*-cout<<"specify the length of both strings"<<endl;
	cin>>b;	
	cin>>c;*/
	
	char arr[50];
	char arr1[50];
	cin>>arr;
	cin>>arr1;
	
	
	
	mystrcat(arr,arr1);
	return 0;
}


