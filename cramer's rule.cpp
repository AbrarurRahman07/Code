#include <iostream>
using namespace std;

// Function to compute determinant of a 3x3 matrix
double determinant3x3(double m[3][3])
{
    return m[0][0]*(m[1][1]*m[2][2] - m[1][2]*m[2][1])
           - m[0][1]*(m[1][0]*m[2][2] - m[1][2]*m[2][0])
           + m[0][2]*(m[1][0]*m[2][1] - m[1][1]*m[2][0]);
}

int main()
{
    double a[3][3]; // coefficients
    double d[3];    // constants

    cout << "Enter coefficients and RHS for each equation (a b c d):\n";
    for(int i=0; i<3; i++)
    {
        cout << "Equation " << (i+1) << ": ";
        cin >> a[i][0] >> a[i][1] >> a[i][2] >> d[i];
    }

    // Matrix for D
    double D_matrix[3][3] =
    {
        {a[0][0], a[0][1], a[0][2]},
        {a[1][0], a[1][1], a[1][2]},
        {a[2][0], a[2][1], a[2][2]}
    };
    double D = determinant3x3(D_matrix);

    if (D == 0)
    {
        cout << "\nNo unique solution exists (D=0).\n";
        return 0;
    }

    // Matrix for Dx
    double Dx_matrix[3][3] =
    {
        {d[0], a[0][1], a[0][2]},
        {d[1], a[1][1], a[1][2]},
        {d[2], a[2][1], a[2][2]}
    };
    double Dx = determinant3x3(Dx_matrix);

    // Matrix for Dy
    double Dy_matrix[3][3] =
    {
        {a[0][0], d[0], a[0][2]},
        {a[1][0], d[1], a[1][2]},
        {a[2][0], d[2], a[2][2]}
    };
    double Dy = determinant3x3(Dy_matrix);

    // Matrix for Dz
    double Dz_matrix[3][3] =
    {
        {a[0][0], a[0][1], d[0]},
        {a[1][0], a[1][1], d[1]},
        {a[2][0], a[2][1], d[2]}
    };
    double Dz = determinant3x3(Dz_matrix);

    // Solutions
    double x = Dx / D;
    double y = Dy / D;
    double z = Dz / D;

    cout << "\nUnique solution found:\n";
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;
}
