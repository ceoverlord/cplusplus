#include <iostream>
#include <iomanip>
#include "global.h"

using namespace std;

void multiply_me()
{


    for (int a=1;a<=10;a++)
    {
            //cout << setw(3) << a << " | ";
        for (int b=1;b<=10;b++)
            {
            num[a-1][b-1]=a*b;
            //cout << setw(3) << num[a-1][b-1] << " | ";
            }
    //cout << "\n-----------------------------------------------------------------\n";
    }
}
