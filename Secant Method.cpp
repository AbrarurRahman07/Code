#include<iostream>
#include<cmath>
using namespace std;

double f(double x)
{
    return x*x -4;
}
void secant(double x0,double x1,double limit,double maxiter)
{
    double iter=0;
    double x2;
    while(iter<maxiter)
    {
        x2=x1-(f(x1)*(x1-x0))/(f(x1)-f(x0));
        cout << "x0: " << x0 << ", x1: " << x1 << ", x2: " << x2 <<endl;
        if(fabs(x2-x1)<limit)
            break;
        x0=x1;
        x1=x2;
        iter++;
    }
    cout<<"Root:"<<x2<<endl;
}

int main()
{
    secant(0.0, 5.0, 0.0001, 100);
    return 0;

}
