#include <iostream>
using namespace std;

double lagrangeInterpolation(double x[], double y[], int n, double value)
{
    double result = 0;

    for (int i = 0; i < n; i++)
    {
        double term = y[i];
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                term *= (value - x[j]) / (x[i] - x[j]);
            }
        }
        result += term;
    }

    return result;
}

int main()
{
    const int n = 3;
    double x[n] = {1.0,4.0,6.0};
    double y[n] = {0.0,1.386294,1.791760};

    double value = 2.0;

    double result = lagrangeInterpolation(x, y, n, value);
    double result2 = lagrangeInterpolation(x, y, 2, value);

    cout.precision(10);
    cout << "Estimate of ln(2) using Lagrange Interpolation: " << result << endl;
    cout << "Estimate of ln(2) using Lagrange Interpolation: " << result2 << endl;
    cout << "True value of ln(2): 0.6931472" << endl;

    return 0;
}

