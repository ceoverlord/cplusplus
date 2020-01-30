#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void find_root(double &a, double &b, double &c, double &r1, double &r2); //ze prototype

int main()
{
double r1, r2;
double a, b, c;


    cout << "\t\tProgram to calculate the root of a quadratic.\n";
    cout << "\t\t\t\tAx^2+Bx+C = 0\n\n";
    cout << "The following prompt will ask you for your coefficients.\n\n";

    cout << "Value of A: ";
    cin >> a;
    cout << "Value of B: ";
    cin >> b;
    cout << "Value of C: ";
    cin >> c;

find_root(a, b, c, r1, r2); //1st root

  return 0;
}

void find_root(double&a, double& b, double& c, double& r1, double& r2) //find root function
{
     double real, imag;
     double discrim = b*b - 4*a*c;

    if (discrim > 0) {
        r1 = (-b + sqrt(discrim)) / (2*a);
        r2 = (-b - sqrt(discrim)) / (2*a);
        cout << "The roots have different solutions" << endl;
        cout << "x1 = " << r1 << endl;
        cout << "x2 = " << r2 << endl;
    }

    else if (discrim == 0) {
        cout << "The roots are the same." << endl;
        r1 = (-b + sqrt(discrim)) / (2*a);
        cout << "x1,2 = " << r1 << endl;
    }

    else {
        real = -b/(2*a);
        imag = sqrt(-discrim)/(2*a);
        cout << "The roots are complex."  << endl;
        cout << "r1 = " << real << "+" << imag << "i" << endl;
        cout << "r2 = " << real << "-" << imag << "i" << endl;
    }

}
