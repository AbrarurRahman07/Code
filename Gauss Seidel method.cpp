#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x = 0, y = 0, z = 0; // Initial guess
    float x1, y1, z1;
    int i = 0;
    float error = 0.0001;

    cout << "Solving the system:\n";
    cout << "4x + y + z = 7\n";
    cout << "x + 3y + z = -8\n";
    cout << "x + y + 5z = 6\n";

    cout << fixed;

    do
    {
        x1 = (7 - y - z) / 4;
        y1 = (-8 - x1 - z) / 3;
        z1 = (6 - x1 - y1) / 5;

        cout << "Iteration " << ++i << ": ";
        cout << "x = " << x1 << ", y = " << y1 << ", z = " << z1 << endl;

        // Update old values for next iteration
        if (fabs(x - x1) < error && fabs(y - y1) < error && fabs(z - z1) < error)
            break;

        x = x1;
        y = y1;
        z = z1;

    }
    while (i < 100);   // safety limit to avoid infinite loop

    cout << "\nFinal Solution:\n";
    cout << "x = " << x1 << endl;
    cout << "y = " << y1 << endl;
    cout << "z = " << z1 << endl;

    return 0;
}
