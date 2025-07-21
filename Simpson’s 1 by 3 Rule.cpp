#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
    return 0.2 + 25*x - 200*pow(x,2) + 675*pow(x,3) - 900*pow(x,4) + 400*pow(x,5);
}

int main()
{
    double a = 0.0;
    double b = 0.8;

    double fa = f(a);
    double fm = f((a + b) / 2.0);
    double fb = f(b);

    double result = (b - a) / 6.0 * (fa + 4 * fm + fb);

    cout.precision(10);
    cout << "Approximate value using Simpson's 1/3 Rule: " << result << endl;
    cout << "Exact value (given): 1.640533" << endl;

    return 0;
}

