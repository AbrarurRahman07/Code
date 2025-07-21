#include <iostream>
using namespace std;
double linearLagrange(double x0, double y0, double x1, double y1, double value)
{
    return y0 * (value - x1) / (x0 - x1) + y1 * (value - x0) / (x1 - x0);
}

double quadraticLagrange(double x[], double y[], double value)
{
    double L0 = y[0] * (value - x[1]) * (value - x[2]) / ((x[0] - x[1]) * (x[0] - x[2]));
    double L1 = y[1] * (value - x[0]) * (value - x[2]) / ((x[1] - x[0]) * (x[1] - x[2]));
    double L2 = y[2] * (value - x[0]) * (value - x[1]) / ((x[2] - x[0]) * (x[2] - x[1]));
    return L0 + L1 + L2;
}

int main()
{
    double x1 = 1.0, y1 = 0.0;
    double x2 = 4.0, y2 = 1.386294;
    double x3 = 6.0, y3 = 1.791760;
    double value = 2.0;
    double linearResult = linearLagrange(x1, y1, x2, y2, value);
    double x[] = {x1, x2, x3};
    double y[] = {y1, y2, y3};
    double quadraticResult = quadraticLagrange(x, y, value);

    cout.precision(10);
    cout << "=== ln(2) Estimation ===" << endl;
    cout << "True value of ln(2):      0.6931472" << endl;
    cout << "Linear interpolation:     " << linearResult << endl;
    cout << "Quadratic interpolation:  " << quadraticResult << endl;

    return 0;
}

