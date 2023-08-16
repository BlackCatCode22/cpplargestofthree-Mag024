// largestOThreeIntegers.cpp

// Programmer's Name: Miguel Gomez

// Date: August 16, 2023; 08-16-23 10:58

// Largest of three numbers: program will determine between three integers which is the highest value using boolean data type

// Numbers will be input by the user. it will then be processed via the algorithm to establish the largest integer.

// References:

//Getting started:
//
//
//

#include <iostream>

using namespace std;

int main()
{   int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int largest = 0;

    // Get username of individual
    string username = "";
    cout << "please enter name" << endl;
    cin >> username;

    // Input to get num1
    cout << "Enter integer value of num1" << endl;
    cin >> num1;
    cout << "Value of first number..." << num1 << endl;

    // Input to get num2
    cout << "Enter integer value of num2" << endl;
    cin >> num2;
    cout << "Value of second number ..." << num1 << endl;


    // Input to get num3
    cout << "Enter integer value of num3" << endl;
    cin >> num3;
    cout << "Value of third number..." << num3 << endl;

    //program should be able to get the largest number
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            largest = num1;
        }

        else
        {
           largest = num3;
        }
    }
    else
    {
     if (num2 > num3)
     {
         largest = num2;
     }
     else
    {
      largest = num3;
    }
    }


    cout << "Between the numbers ... " << num1 << ", " << num2 << " and " << num3 << " the largest number is " << largest << endl;
    return 0;
}
