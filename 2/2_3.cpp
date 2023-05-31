// 2_3.cpp

#include <iostream>
using namespace std;

namespace Square
{
    int num;
    int fun(int num)
    {
        return num*num;
    }
}

namespace Cube
{
    int num;
    int fun(int num)
    {
        return num*num*num;
    }
}

int main()
{
    Square::num = 4;
    Cube::num = 5;
    cout << Square::fun(Square::num) << endl;
    cout << Cube::fun(Cube::num) << endl;

    return 0;
}