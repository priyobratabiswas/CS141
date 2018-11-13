#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[20],*p;
//declared a character array and character pointer.
//getting the input in array	
	cout<<"enter the character array(string)"<<endl;
	cin>>str;
//taking the adress of array in pointer
	p=str;
	while(*p!='\0')
	{
		p++;
	}
	while((p--)!=str)
	{
		//p--;
		cout<<p<<endl;
	}
	return 0;
}
