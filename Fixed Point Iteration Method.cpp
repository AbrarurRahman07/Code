#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
double g(double x)
{
    return sqrt(4);
}
void fixedPoint(double x0, double tol, int maxIter)
{
    double x1;
    int iter = 0;
    cout << fixed << setprecision(6);
    cout << left
         << setw(10) << "Iter"
         << setw(15) << "x0"
         << setw(15) << "x1 = g(x0)"
         << setw(15) << "|x1 - x0|"
         << endl;
    while (iter < maxIter)
    {
        x1 = g(x0);
        cout << setw(10) << iter
             << setw(15) << x0
             << setw(15) << x1
             << setw(15) << fabs(x1 - x0)
             << endl;
        if (fabs(x1 - x0) < tol)
            break;
        x0 = x1;
        iter++;
    }
    cout << "Root = " << x1 << endl;
}
int main()
{
    fixedPoint(1.0, 0.0001, 100);
    return 0;
}
