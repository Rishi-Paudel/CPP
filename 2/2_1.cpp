// 2_1.cpp
// Program to set a structure to hold date (mm,dd and yy), assign values to the members of the structure and print out the values in the format 11/28/2004 by function. Pass the structure to the function

#include <iostream>
using namespace std;

struct Date
{
    int mm;
    int dd;
    int yy;
};

void DisplayDate(struct Date d1)
{
    cout << d1.mm << "/" << d1.dd << "/" << d1.yy;
}


int main()
{
    struct Date d1;
    int mm, dd, yy;
    cout << "Enter the year: ";
    cin >> d1.yy;
    cout << "Enter the month: ";
    cin >> d1.mm;
    cout << "Enter the day: ";
    cin >> d1.dd;
    DisplayDate(d1);

    return 0;
}