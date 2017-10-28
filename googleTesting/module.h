#ifndef MODULE_H
#define MODULE_H
#include <math.h>
#include <functional>
#include <cassert>
#include <iostream>
double squareRoot(const double a) {
    double b = sqrt(a);
    if(b != b) { // nan check
        return -1.0;
    }else{
        return sqrt(a);
    }
}

using realFunction=std::function<double(double)>;

double dichotomie(const realFunction & f, double a, double b, double tol=1E-4)
{
    if(f(a)*f(b)>0) throw std::invalid_argument("wrong interval");
    auto mid=(b+a)/2;
    while(fabs(b-a)>tol && fabs(f(mid))>tol)
    {
        std::cout<<f(mid)<<std::endl;
        mid=(b+a)/2.;
        if(f(mid)*f(a)<0)
            b=mid;
        else
            a=mid;
    }
    return mid;
}



#endif // MODULE_H
