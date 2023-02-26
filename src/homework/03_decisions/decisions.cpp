//write include statement for decisions header
#include "decisions.h"

using std::string;


//Write code for function(s) code here

string get_letter_grade_using_if(int grade)
{
    string result;

    if(grade >= 90 && grade <= 100)
    {
        result = "A";
    }
    else if(grade >= 80 && grade <= 89)
    {
        result = "B";
    }
    else if(grade >= 70 && grade <= 79)
    {
        result = "C";
    }
    else if(grade >= 60 && grade <= 69)
    {
        result = "D";
    }
    else if(grade >= 0 && grade <= 59)
    {
        result = "F";
    }
 
    return result;
}

string get_letter_grade_using_switch(int grade)
{
    string option;

    switch (grade)
    {
     case 90 ... 100:
        option = "A";
        break;
     case 80 ... 89:
        option = "B";
        break;
     case 70 ... 79:
        option = "C";
        break;
     case 60 ... 69:
        option = "D";
        break;
     case 0 ... 59:
        option = "F";
        break;
    
    }
    return option;
}
