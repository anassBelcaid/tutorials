#include <iostream>
#include <boost/math/distributions.hpp>
using namespace std;
int main(int argc, char *argv[])
{
    cout<<"useful distribution in boost;"<<endl;

    //creating the distribution
    boost::math::normal_distribution<> d(0.5,1);

    cout<<"CDF: "<<cdf(d,0.2)<<endl;
    cout<<"PDF:"<<pdf(d,0.0)<<endl;
    cout<<"Inverse: "<<quantile(d,0.352065)<<endl;
    cout<<"Mode : "<<mode(d)<<endl;
    cout<<"Variance : "<<variance(d)<<endl;
    cout<<"Standard deviation: "<<standard_deviation(d)<<endl;
    cout<<"Skewness : "<<skewness(d)<<endl;

    //calculating the support of the distribution
    auto sup=support(d);
    cout<<"left value is :"<<sup.first<<endl;
    cout<<" right value is :"<<sup.second<<endl;
}
