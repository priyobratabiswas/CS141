/*strcpy
strcat
strlen
strcmp
strchr
strstr*/
#include<iostream>
#include<cstring>
using namespace std;
//mystrcpy
//it is basically a function that f(string2,string1) where string 1 is copied to string 2
char*mystrcpy(char*string1,char*string2)
{
	char*copy;
	copy=string2;
	string1=copy;
	cout<<string1<<endl;
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
	
	/*cout << str << endl;
	cout << str1 << endl; 
	
	int i; 
	for(i=0;i<sizeof(arr);i++) 
	{ 
	arr[i]=str[i];  
	} 
	// Error using same i ?? 
	for(int j=0;i<sizeof(arr1);j++) 
	{ 
	arr1[i]=str1[i];  
	} */
	//char arr[50];
	//getline(cin,arr);
	//cin >> arr;
	//cout<<arr;
	mystrcpy(arr,arr1);
	return 0;
}
//mystrcat
// adds two strings


