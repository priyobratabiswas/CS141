/*Some problems from online for those who are bored). Due date is Oct 5.

Question 1 (Loops): Apples cost Re1 each, mangoes cost Rs3 each, and 1 banana is only Rs0.50. You bought 100 fruits for Rs100, How many of each fruit did you buy? Display all variations of answer.

Question 2 (Functions): You are a salesperson of Bata shoe company, where each shoe is Rs 225. Company gave you three options for the salary.
1. Just a salary of Rs 600 per week;
2. A salary of Rs7.00 per hour plus a 10% commission on sales; (Assume you work 40 hours a week)
3. No salary, but 20% commissions and Rs20 for each pair of shoes sold
Write a program to help decide the best choice of compensation. You ask the user for input (Write a function for this). Then write other functions for each of the options. Write a driver program to use the 4 functions and decide the best option for yourself. (Of course, the weekly sales - the number of shoes sold per week has to be given by the user)

Question 3 (Loops and Logic): The integer 36 has a peculiar property: it is a perfect square, and is also the sum of the integers from 1 through 8. The next such number is 1225 which is 352, and the sum of the integers from 1 through 49. Find the next number (or numbers) that is a perfect square and also the sum of a series 1...n. This next number may be greater than 32767 (range of int, so use long). You may use library functions that you know of, (or mathematical formulas) to make your program run faster. (Note: depending on your machine and your program, it can take quite a while to find this number.)*/
#include<iostream>
#include<cmath>
using namespace std;
//funtion to verify whether the number is perfect square or not 
int square(long &a)
{	long double s;
	s=sqrt(a);
	return s;
}
//main function
int main()
{
//declare the variabnles
	long b;
	long double m,n;
//find the function for the sum of numbers
	for(long a=50;a>=50;a++)
	{	b=((a*(a+1))/2);
// find whether those numbers are perfect squares or not.
		m=square(b);
		n=(m*m);
		if(n==b)
//display the results
		{	cout<<"the required number is"<<b<<endl;
			break;
		}
	}
return 0;
}


