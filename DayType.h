//DayType.h, the specification file for the class DayType


#pragma once             // ensures the file is included only once;

#include <string> 

using namespace std;

class dayType
{
    //dayType.h, the specification file for the class dayType; class definition
public:

    
    void setDay(const string& NamofDay);  // Set the day
    // Pre: Function to set the day according to the parameter
     //Postcondition: day = NamofDay, if value is valid, the result is placed in day


    void printDay() const;  // Print the day
    // Pre: Function to accept the day
    //Postcondition: The name of the day is printed

    
   string getDay()const;    // Return the current day
     //Pre: Function to return a set day
    //Postcondition: namofDay = day

    
    string NextDay() const;   // Return the next day
    // Pre: Function to accept the day and determine its index number, then add 1
    //Postcondition: returns the resulting name of the day 

    
    string PreviousDay() const;  // Return the previous day
    // Pre: Function to accept the day and determine its index number, then subtracts 1
    //Postcondition: returns the resulting name of the day

    
    string addDays(int DayNum) const;  // Add days and return the resulting day
    //Postcondition: Pre: Function to accept the day and determine its index number, then add a given parameter
    //Postcondition: returns the resulting name of the day based off of parameter
    
    dayType();                       // Default constructor (sets day to Sunday)
    // Pre: Function to accepts Sun, 
    //Postcondition: assign Sun to day

    dayType(const string& NamofDay); // Constructor with specified day
    // Pre: Function to accepts and pulls the index number, 
    //Postcondition: assign the nameofDay to day, if invalid goes to Sun
 
    

private:
    string day;                  // Stores the day of the week

    int DayIndex(const string& DayName) const;  //  calculate the day index

    
    string DayName(int index) const;//  get the day name from an index using (index %7),
    // ex: if 7%7 =1, so remainder is 0, thus Sunday
}; 