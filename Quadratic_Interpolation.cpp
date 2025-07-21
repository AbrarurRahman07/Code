#include <iostream>
using namespace std;

double quadraticInterpolation(double x0,double y0,double x1,double y1,double x2,double y2,double x)
{
    double term1 = y0*(x - x1)*(x - x2)/((x0-x1)*(x0-x2));
    double term2 = y1*(x-x0)*(x-x2)/((x1-x0)*(x1-x2));
    double term3 = y2*(x-x0)*(x-x1)/((x2-x0)*(x2-x1));

    return term1+term2+term3;
}

int main()
{
    double x0=1.0,y0=0.0;
    double x1=2.5,y1=0.916291;
    double x2=4.0,y2=1.386294;

    double x =2.0;

    double result=quadraticInterpolation(x0,y0,x1,y1,x2,y2,x);

    cout.precision(10);
    cout<<"Estimate of ln(2) using Quadratic Interpolation: "<<result<<endl;
    cout<<"True value of ln(2): 0.6931472"<<endl;

    return 0;
}
