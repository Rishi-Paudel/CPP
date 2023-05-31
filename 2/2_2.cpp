// 2_2.cpp
// feet into inches

#include <iostream>
using namespace std;

void feet_into_inches()
{
    cout << "5 feet = " << 5 * 12 << " inches." << endl;
}

void feet_into_inches(float feet)
{
    cout << feet << " feet = " << feet * 12 << " inches." << endl;
}

void feet_into_inches(float &feet, float &inches)
{
    cout << feet << " feet and " << inches << " inches = " << (feet)*12 + (inches) << " inches." << endl;
}

int main()
{
    float feet, inches;
    cout << "Enter the distance in feet and inches: ";
    cin >> feet >> inches;
    feet_into_inches();
    feet_into_inches(feet);
    feet_into_inches(feet, inches);
    return 0;
}