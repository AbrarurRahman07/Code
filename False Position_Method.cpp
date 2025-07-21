#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
double f(double x)
{
    return 3*x-cos(x)-1;
}
void  falsePosition(double a,double b,double limit)
{
    if(f(a)*f(b)>=0)
    {
        cout<<"Invalid Interval"<<endl;
        return;
    }
    double c=a;
    while(fabs(f(c))>limit)
    {
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        cout << fixed << setprecision(6);
        cout << "A = " << setw(5) << a << "    ";
        cout << "B = " << setw(5) << b << "    ";
        cout << "C = " << setw(5) << c << "    ";

        cout << "f(A) = " << setw(7) << f(a) << "    ";
        cout << "f(B) = " << setw(7) << f(b) << "    ";
        cout << "f(C) = " << setw(7) << f(c) << "    ";
        cout << "f(A)*f(C) = " << setw(7) << f(a) * f(c) << endl;


        if(f(c)==0)
            break;
        else if(f(c)*f(a)<=0)
            b=c;
        else
            a=c;
    }
    cout<<"ROOT= "<<c<<endl;
}
int main()
{
     falsePosition(0,5,0.0001);
    return 0;
}

