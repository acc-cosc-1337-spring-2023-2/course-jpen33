//add include statements

#include "dna.h"

using std::cout; using std::cin;

//add function(s) code here

int factorial(int num)
{
    auto fact = 1;

    while(num > 0)
    {
        fact *= num;
        num--;
    }
    return fact;
}

int gcd(int num1, int num2)
{
    if(num1 < num2)
    {
        auto temp_num = num1;
        num1 = num2;
        num2 = temp_num; 
    }
    while(num1 > num2)
    {
        num1 = num1 - num2;
    }
    return num1;
}

void run_menu()
{
    auto option = 0;

    do
    {
        display_menu();

        cout<<"Please enter a menu option: ";
        cin>>option;

        auto num = 0;
        auto num1 = 0;
        auto num2 = 0;
    

        switch(option)
        {
        case 1:
            cout<<"\n Selected Factorial: \n";
            cout<<"Please inter a positive integer: ";
            cin>>num;
            cout<<"The factorial of the number that was entered is: "<<factorial(num)<<"\n";
            break;
        case 2:
            cout<<"\n Selected Greatest Common Divisor:\n";
            cout<<"Please enter a positive integer: ";
            cin>>num1;
            cout<<"Now enter a second positive integer: ";
            cin>>num2;
            cout<<"\nThe Greatest Common Divisor (GCD) of the numbers that were entered is: "<<gcd(num1, num2)<<"\n\n";
            break;
        case 3:
            cout<<"\n Selected the Exit: \n"; 
            // \|T|/ Prise the Exit \|T|/
            char choice;
            cout<<"Are you sure you want to exit(Y/N)?\n";
            cin>>choice;
            cout<<"\n";
            if(choice == 'y' || choice == 'Y')
            {
                cout<<"Now leaving the program..."<<"\n\n";
                option++;
                
            }
            else if(choice  == 'n' || choice == 'N')
            {
                break;
            }
        }
        
    } 
    while (option != 4);
}

void display_menu()
{
    cout<<"1-Factorial";
	cout<<"2-Greatest Common Divisor";
	cout<<"3-Exit";
}
