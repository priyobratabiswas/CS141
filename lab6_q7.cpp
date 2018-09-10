#include<iostream>
using namespace std;
//UpperCase and LowerCase
//Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
char toUpper(char letteri){
	int i;
	char letterf;
	i=int(letteri);
	i=(i-32);
	letterf= char(i);
	return letterf;
	}

//Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
char tolower(char letteri){
	int i;
	char letterf;
	i=int(letteri);
	i=(i+32);
	letterf= char(i);
	return letterf;
	}
//Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa. 

int main (){
	cout<<"Hello !"<<endl;
	cout<<"Here we would be converting uppercase alphabets to lowercase alphabetsa and vice versa"<<endl;
	char a;
	int i;
	cout<<"please enter any alphabet"<<endl;
	cin>>a;
	i=int(a);
	if (i>=65 && i<=90){
		char letterf;
		letterf=tolower(a);
		cout<<"the lowercase alphabet of "<<a<<" is :"<<letterf<<endl;
	}
	else if (i>=97 && i<=122){
		char letterf;
		letterf=toUpper(a);
		cout<<"the uppercase alphabet of "<<a<<" is :"<<letterf<<endl;
	}
	else {
		cout<<"ERROR"<<endl;
	}
	return 0;
}
