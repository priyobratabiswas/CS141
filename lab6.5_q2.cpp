/*Some problems from online for those who are bored). Due date is Oct 5.

Question 1 (Loops): Apples cost Re1 each, mangoes cost Rs3 each, and 1 banana is only Rs0.50. You bought 100 fruits for Rs100, How many of each fruit did you buy? Display all variations of answer.

Question 2 (Functions): You are a salesperson of Bata shoe company, where each shoe is Rs 225. Company gave you three options for the salary.
1. Just a salary of Rs 600 per week;
2. A salary of Rs7.00 per hour plus a 10% commission on sales; (Assume you work 40 hours a week)
3. No salary, but 20% commissions and Rs20 for each pair of shoes sold
Write a program to help decide the best choice of compensation. You ask the user for input (Write a function for this). Then write other functions for each of the options. Write a driver program to use the 4 functions and decide the best option for yourself. (Of course, the weekly sales - the number of shoes sold per week has to be given by the user)

Question 3 (Loops and Logic): The integer 36 has a peculiar property: it is a perfect square, and is also the sum of the integers from 1 through 8. The next such number is 1225 which is 352, and the sum of the integers from 1 through 49. Find the next number (or numbers) that is a perfect square and also the sum of a series 1...n. This next number may be greater than 32767 (range of int, so use long). You may use library functions that you know of, (or mathematical formulas) to make your program run faster. (Note: depending on your machine and your program, it can take quite a while to find this number.)*/
#include<iostream>
using namespace std;
//funtion to take input from the user
void intro(int &d)
{
	cout<<"Hello, this programme id developed to give you the best option while you work in the shoe shop."<<endl;
	cout<<"options are"<<endl;
	cout<<"1. Just a salary of Rs 600 per week;"<<endl;
	cout<<"2. A salary of Rs7.00 per hour plus a 10% commission on sales; (Assume you work 40 hours a week)"<<endl;
	cout<<"3. No salary, but 20% commissions and Rs20 for each pair of shoes sold"<<endl;
	cout<<endl;
	cout<<"enter your weekly turnover of the numberof pair of shoes "<<endl;
	cin>>d;
}

//function to calculate money to be get in commision.(we cakculated 10% and 20% of 225 are 22.5 and 45 respectively.)
void commission(int &a,double &b,double &c)
{
	b=(280+(22.5*a));
	c=(65*a);
}
//function to compare between the gain in different options
void compare(double &f,double &g)
{
	if ((f>600)&&(f>g))
	{
		cout<<"option 2 is better for your abilities"<<endl;
	}
	else if ((g>600)&&(g>f))
	{
		cout<<"option 3 is better for your abilities"<<endl;
	}
	else if(f==g)
	{
		cout<<"both option 2 and 3 are equally good for you."<<endl;
	}
	else
	{
		cout<<"Go for option 1, i.e.,Rs.600 per week salary."<<endl;
	}
}
//to create the driver funtion
int main()
{
	int a;
	double b;
	double c;
	intro(a);
	commission(a,b,c);
	compare(b,c);
	return 0;
}

