// 2_6.cpp

#include <iostream>
using namespace std;

struct Salary
{
    float CEO;
    float IO;
    float SA;
    float P;
} S2009, S2010;

int main()
{
    char post[4][10] = {"CEO", "IO", "SA", "P"};
    float salary[4] = {35000, 25000, 24000, 18000};
    S2009.CEO = 35000;
    S2009.IO = 25000;
    S2009.SA = 24000;
    S2009.P = 18000;
    

    return 0;
}