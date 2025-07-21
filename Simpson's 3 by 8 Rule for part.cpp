#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
    return 0.2 + 25*x - 200*pow(x,2) + 675*pow(x,3) - 900*pow(x,4) + 400*pow(x,5);
}

double simpson38(double a, double b)
{
    double h = (b - a) / 3.0;

    double x0 = a;
    double x1 = a + h;
    double x2 = a + 2*h;
    double x3 = b;

    return (3*h/8.0) * (f(x0) + 3*f(x1) + 3*f(x2) + f(x3));
}

int main()
{
    double a = 0.0, b = 0.8;

    double result = simpson38(a, b);

    cout << "Result using Simpson's 3/8 Rule: " << result << endl;

    return 0;
}

