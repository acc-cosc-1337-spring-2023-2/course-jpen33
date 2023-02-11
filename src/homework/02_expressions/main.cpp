//write include statements

#include <iostream>
#include "hwexpressions.h"


//write namespace using statement for cout

using std::cout;
using std::cin;


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	
	double meal_amount = 0;
	double tip_rate = 0;
	double tip_amount = 0;
	double tax_amount = 0;
	double total = 0;


	cout<<"Please enter the total cost of the meal: ";
	cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Please enter the tip as a decimal: ";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;


	cout<<"\n_________________________________________\n";
	cout<<"Meal Amount: $"<<meal_amount<<"\n";
	cout<<"Tax Amount: $"<<tax_amount<<"\n";
	cout<<"Tip Amount: $"<<tip_amount<<"\n";
	cout<<"Total Amount:   $"<<total<<"\n";

	return 0;
}
