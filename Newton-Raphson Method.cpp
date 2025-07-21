#include<iostream>
#include<cmath>
using namespace std;

double f(double x)
{
    return -.4*x*x+2.2*x+4.7;
}
double df(double x)
{
    double h = 1e-6;
    return (f(x + h) - f(x)) / h;
}

void newtonRaphson(double x,double limit)
{
    double h=f(x)/df(x);
    while(fabs(h)>=limit)
    {
        h=f(x)/df(x);
        x-=h;
    }
    cout << "Root = " << x << endl;
}

int main()
{
    newtonRaphson(8.0, 0.0001);
    return 0;
}
