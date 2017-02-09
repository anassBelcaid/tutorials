#include <iostream>
#include <vector>
#include <boost/function.hpp>
#include <string>
using namespace std;
double sum(vector<double> V)
{
    double S;
    for(auto v : V)
        S+=v;

    return S;
}

void message(const string &info)
{
  cout<<info<<endl;
}

void notMessage(const string & info)
{
  cout<<"Dont believe what I'm saying: "<<endl;
  cout<<info<<endl;
}
int main(int argc, char * argv[])
{
    cout<<"Using functions pointers"<<endl;

    //creating the function pointer
    boost::function < double (vector<double>)> F;
    F=sum;

    //creating a vector
    vector<double> V(10,1);
    cout<<F(V)<<endl;

    //function to print a message
    boost::function <void(const string & )> Info=message;
    Info("Simple message");

    Info=notMessage;
    Info("Taking my life back∏");
}
