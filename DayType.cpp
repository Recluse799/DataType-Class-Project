//Implementation File for the class DayType

#include "dayType.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;


static const vector<string> daysOfWeek = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" }; // List of days in order, static-single instance shared, const- cannot be modified

int dayType:: DayIndex(const string& NamofDay) const  // function to get the index of a day
{
    for (int i = 0; i < daysOfWeek.size(); i++) 
    {
        if (daysOfWeek[i] == NamofDay) 
        {
            return i;
        }
    }
    return -1;  // Invalid day
}


string dayType::DayName(int index) const // function to get the day name from an index
{
    return daysOfWeek[index % 7];  // Ensures wrapping around the week
}


void dayType::setDay(const string& NamofDay) // Set the day
{
    int index = DayIndex(NamofDay);
    if (index != -1) 
    {
        day = NamofDay;
    }
    else 
    {
        cout << "Invalid. Day not set." << endl;
    }
}

void dayType::printDay() const  // Print the day

{
   
    cout << getDay() << endl;

}

string dayType::getDay() const // Return the current day
{
    return day;
}

string dayType::NextDay() const  // Return the next day

{
    int index = DayIndex(day);
    return DayName(index + 1);  // Next day index
}

string dayType::PreviousDay() const // Return the previous day
{
    int index = DayIndex(day);
    return DayName(index + 6);  // Previous day index (equivalent to index - 1)
}

string dayType::addDays(int numDays) const     //Add days and return calculated day

{
    int index = DayIndex(day);
    return DayName(index + numDays);
}


dayType::dayType() : day("Sun") {}   // Default constructor


dayType::dayType(const string& NamofDay)  // Constructor with specified day
{
    int index = DayIndex(NamofDay);
    if (index != -1) 
    {
        day = NamofDay;
    }
    else 
    {
        day = "Sun";  // Default to Sunday for invalid input
    }
}