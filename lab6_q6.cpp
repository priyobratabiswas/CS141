/*Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value*/
//include teh library
#include<iostream>
using namespace std;
//introduce/code the function
int sumEvenNumbers(int a,int b){
	int c=0,i;
	for(i=a;i<=b;i++){
		if(i%2==0){
			c=c+i;
		}
	}
	return c;// return the value to the main function
}
/*Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). Use call-by-value*/
//introduce/code the function
int sumOddNumbers(int a,int b){
	int c=0,i;
	for(i=a;i<=b;i++){
		if(i%2==1){
			c=c+i;
		}
	}
	return c;// return the value to the main function
}

/*Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value.*/ 
//introduce/code the function
int sumSquareOddNumbers(int a,int b){
	int z,c=0,i;
	i=a;
	while(i<=b){
		if(i%2==1){
			c=c+(i*i);
			i++;
		}
	else {i++;}
	}
	return c;// return the value to the main function
}
/*Write a function that outputs the sum of the square of the even numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value.*/
 int sumSquareEvenNumbers(int a,int b){
	int z,c=0,i;
	i=a;
	while(i<=b){
		if(i%2==0){
			c=c+(i*i);
			i++;
		}
	else {i++;}
	}
	return c;// return the value to the main function
}
//Write a main program. 
// driver function
int main (){

//say hello
	cout<<"Hello"<<endl;
	cout<<"let's get started"<<endl;
	int a,b;//declaring the variables for inputs
	cout<<"please enter the first number and second number (second>first) :"<<endl;//asking for inputs
	// take the inputs
	cin>>a;
	cin>>b;
//Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. Use sumEven to hold a returned value.
	int sumEven;
	sumEven=sumEvenNumbers(a,b);

//Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. Use sumOdd to hold a returned value.
	int sumOdd;
	sumOdd=sumOddNumbers(a,b);
//Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function. Use sumSquareEven to hold a returned value.
	int sumSquareEven;
	sumSquareEven=sumSquareEvenNumbers(a,b);
//Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. Use sumSquareOdd to hold a returned value.
	int sumSquareOdd;
	sumSquareOdd=sumSquareOddNumbers(a,b);
//Then display the values
	cout<<"the results are:->"<<endl;
	cout<<endl;
	cout<<"The sum of all even numbers between "<<a<<" and "<<b<<" is :"<<sumEven<<endl;
	cout<<"The sum of all odd numbers between "<<a<<" and "<<b<<" is :"<<sumOdd<<endl;
	cout<<"The sum of squares of all even numbers between "<<a<<" and "<<b<<" is :"<<sumSquareEven<<endl;
	cout<<"The sum of squares of all odd numbers between "<<a<<" and "<<b<<" is :"<<sumSquareOdd<<endl;
	return 0;
}
	






