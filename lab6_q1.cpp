/*Tax Rate Calculation using Functions 
Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function.
Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.
Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. Choose an appropriate name for this function.
Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. Your program should call the functions listed above.
Pseudocode and Indentation must be present. */
#include<iostream>
using namespace std;
//to Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function.
void takevalue(int &unitcst,int &units, int &taxRt){
	cout<<"Enter the value of unit cost :"<<endl;
	cin>>unitcst;
	cout<<"Enter the value of number of units:"<<endl;
	cin>>units;
	cout<<"Enter the value of taxation Rate(%):"<<endl;
	cin>>taxRt;}
//Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.
void calculation(int &unitcst,int &units, int &taxRt, int &salestx, int &totdue)
	{salestx=((unitcst)*(taxRt))/100;
	totdue=((unitcst)*(1+taxRt/100)*(units));
	}
//Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. Choose an appropriate name for this function.
void results(int &unitcst,int &units, int &taxRt, int &salestx, int &totdue){
	cout<<"The Unit cost according to the input is :"<<unitcst<<endl;
	cout<<"The number of units according to the input is :"<<units<<endl;
	cout<<"The tax rate according to the input is :"<<taxRt<<endl;
	cout<<"The value of the sales tax would be :"<<salestx<<endl;
	cout<<"The value of the total due would be :"<<totdue<<endl;}
//Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. Your program should call the functions listed above.
int main (){
	int unitcost,unitsPurch,taxRate,salesTax,totalDue;
	takevalue(unitcost,unitsPurch,taxRate);
	calculation(unitcost,unitsPurch,taxRate,salesTax,totalDue);
	results(unitcost,unitsPurch,taxRate,salesTax,totalDue);
	return 0;
}
