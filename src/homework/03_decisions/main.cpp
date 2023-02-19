//write include statements

#include "decisions.h"
using std:cout; using std::cin; using std::string;


int main() 
{
	int menu_option = 0;
	int grade = 0;

	cout<<"\n   MAIN MENU\n";
	cout<<"1-Letter grade using if\n";
	cout<<"2-Letter grade using switch\n";
	cout<<"3-Exit\n\n";
	cout<<"Please enter a selection: ";
	cin>>menu_option;
	
	if (menu_option == 1)
	{
		cout<<"Please enter a grade between the numbers 0 and 100: ";
		cin>>grade;

		if(grade >= 0 && grade <= 100)
		{
			auto result = get_letter_grade_using_if(grade);
			cout<<"Results from using if is: "<<result<<"\n\n";
		}
		else
		{
			cout<<"The number is out of the range\n\n";
		}
	}
	else if (menu_option == 2)
	{
		cout<<"Please enter a grade between the numbers 0 and 100: ";
		cin>>grade;

		if(grade >= 0 && grade <= 100)
		{
			auto result = get_letter_grade_using_switch(grade);
			cout<<"Results from using switch is: "<<result<<"\n\n";
		}
		else
		{
			cout<<"This number is out of the range\n\n";
		}
	}
	else if (menu_option == 3)
	{
		cout<<"Exiting the section...\n\n";
	}
	else
	{
		cout<<"The entry is Invalid\n\n";
	}
	
	
	return 0;
}
