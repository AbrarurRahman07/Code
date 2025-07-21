#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
    return 0.2 + 25*x - 200*pow(x,2) + 675*pow(x,3) - 900*pow(x,4) + 400*pow(x,5);
}

int main()
{
    double a=0,b=.8,h =(b-a)/5 ;

    double x0 = 0.0;
    double x1 = x0 + h;
    double x2 = x0 + 2*h;
    double x3 = x0 + 3*h;
    double x4 = x0 + 4*h;
    double x5 = x0 + 5*h;

    // Evaluate function at each point
    double f0 = f(x0);
    double f1 = f(x1);
    double f2 = f(x2);
    double f3 = f(x3);
    double f4 = f(x4);
    double f5 = f(x5);

    double I1 = (2 * h / 6.0) * (f0 + 4 * f1 + f2);

    double I2 = (3 * h / 8.0) * (f2 + 3 * f3 + 3 * f4 + f5);

    // Total integral
    double I = I1 + I2;

    // Display results
    cout << "f(0.0) = " << f0 << endl;
    cout << "f(0.16) = " << f1 << endl;
    cout << "f(0.32) = " << f2 << endl;
    cout << "f(0.48) = " << f3 << endl;
    cout << "f(0.64) = " << f4 << endl;
    cout << "f(0.8) = " << f5 << endl;

    cout << "\nIntegral using 1/3 Rule (x0 to x2): " << I1 << endl;
    cout << "Integral using 3/8 Rule (x2 to x5): " << I2 << endl;
    cout << "Total Integral I = " << I << endl;

    return 0;
}
