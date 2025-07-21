#include <iostream>
using namespace std;

double f(double x)
{
    return (x == 1) ? 0 : (x == 2) ? 0.693147 : 1.386294;
}

int main()
{
    double x0 = 1, x1 = 2, x2 = 4;
    double fx0 = f(x0);
    double fx1 = f(x1);
    double fx2 = f(x2);

    double b0 = (fx1 - fx0) / (x1 - x0);
    double b1 = ((fx2 - fx1) / (x2 - x1) - b0) / (x2 - x0);

    // Interpolate at x = 3
    double x = 3;
    double fx = fx0 + b0*(x - x0) + b1*(x - x0)*(x - x1);

    cout << "Interpolated f(" << x << ") = " << fx << endl;

    return 0;
}
