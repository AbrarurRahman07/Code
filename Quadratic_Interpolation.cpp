#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    double x0 = 1,x1 = 4,x2= 6,x=2;
    double fx0 = log(1);
    double fx1 = log(4);
    double fx2 = log(6);

    double b0=fx0;
    double b1 = (fx1 - fx0) / (x1 - x0);
    double b2 = ((fx2 - fx1) / (x2 - x1) - b1) / (x2 - x0);

    double fx = b0 + b1*(x - x0) + b2*(x - x0)*(x - x1);

    cout<<"b0= "<<b0<<endl;
    cout<<"b1= "<<b1<<endl;
    cout<<"b2= "<<b2<<endl;

    cout << "Interpolated f(" << x << ") = " << fx << endl;

    return 0;
}
