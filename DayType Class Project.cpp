// DataType Class Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include "dayType.h"
#include <iostream>

using namespace std;


int main() 
{ 
    
    dayType currentday;  // object declared with default constructor

    cout << "Test default day and print and get function with no parameter: " << endl;
    
    currentday.printDay();  // Test default day and print and get 

    cout << "Test with supplied day and print and get function: " << endl;

    currentday.setDay("Tue");  // Set the day to "Tue"

    currentday.printDay();  // testing the get and print function

    cout << "Test current day and print " << endl;

    currentday.setDay("Wed");  // Set the day to "Wed"

    currentday.printDay();  // testing the get and print function current day Wed

    cout << "Next Day: " << currentday.NextDay() << endl;  // Get and print the next day

    cout << "Previous Day: " << currentday.PreviousDay() << endl;  // Get and print the previous day

    cout << "Day after adding 5 days: " <<  currentday.addDays(5) << endl;   // Add 5 days and print the resulting day

    cout << "Day after adding 17 days: " << currentday.addDays(17) << endl;   // Add 17 days and print the resulting day

    cout << "Test if parameter is invalid: " << endl;

    currentday.setDay("Funday");  // Set to an invalid day

    currentday.printDay();

    return 0;
}