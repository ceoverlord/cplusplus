#include <iostream>
#include <iomanip>
#include "global.h"

using namespace std;
int num[10][10];
int main()
{
    cout << "This is a multiplication table of the integers one through ten\n\n\t\t\tA Matt Semmel Jam\n\n";
    //cout << "-----------------------------------------------------------------\n";
    cout << "    |   1 |   2 |   3 |   4 |   5 |   6 |   7 |   8 |   9 |  10 |\n";
    cout << "-----------------------------------------------------------------\n";

    multiply_me();

    for (int a=1;a<=10;a++)
    {
            cout << setw(3) << a << " | ";
        for (int b=1;b<=10;b++)
            {
            //num[a-1][b-1]=a*b;
            cout << setw(3) << num[a-1][b-1] << " | ";
            }
    cout << "\n-----------------------------------------------------------------\n";
    }

    return 0;
}
