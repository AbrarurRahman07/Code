#include <iostream>
using namespace std;

double linearInterpolation(double x0,double y0,double x1,double y1,double x)
{
    double y=y0+(y1-y0)*(x-x0)/(x1-x0);
    return y;
}

int main()
{
    double x0, y0, x1, y1, x;
    cout<<"Enter first point (x0, y0): ";
    cin>>x0>>y0;

    cout<<"Enter second point (x1, y1): ";
    cin >> x1 >> y1;

    cout<<"Enter the value of x to find y: ";
    cin>>x;

    float result=linearInterpolation(x0,y0,x1,y1,x);
    cout <<"Interpolated value of y at x = " <<x<<" is: "<<result<<endl;

    return 0;
}

