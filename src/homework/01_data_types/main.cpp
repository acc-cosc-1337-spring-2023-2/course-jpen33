//write include statements

#include<iostream>
#include "data_types.h"

//write namespace using statement for cout

using std::cin;
using std::cout;


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	
int num;
	cont<<" Please enter a number: ";
	cin>>num;
	int result = multiply_numbers(num);
	cout<<"The result is:" <<result<< "/n";
	int num1 =4;
	result = multiply_numbers(num1);
	cout<<"The result is:" <<result<< "/n";
	
	return 0;
}
