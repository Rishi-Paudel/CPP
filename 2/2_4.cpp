// 2_4.cpp

#include <iostream>
using namespace std;

void fun(float &temp1, float &temp2, int &value)
{
    if (temp1>temp2)
    {
        temp1 = value;
        return;
    }
    temp2 = value;
    return;
}

int main()
{
    int value;
    float temp1, temp2;

    cout << "Enter a value: ";
    cin >> value;
    cout << "Enter first temperature: ";
    cin >> temp1;
    cout << "Enter second temperature: ";
    cin >> temp2;
    fun(temp1, temp2, value);
    cout << "First temperature: " << temp1 << endl;
    cout << "Second temperature: " << temp2 << endl;
}