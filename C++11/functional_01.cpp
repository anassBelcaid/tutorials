#include<iostream>
#include<functional>

class testFunctionMember
{
public:
	std::function<double(double)> prior;
	std::function<double(double)> fidelity;
	double eval(double x)const
	{
		return prior(x)+fidelity(x);
	}
};

int main(int argc, char * argv[])
{
    using std::cout;
    using std::endl;

    auto f1=[](double x){return 3*x ;};
    auto f2=[](double x){return 3+x;};

    auto g1=[](double x){return x;};
    auto g2=[](double x){return 2*x;};

    testFunctionMember g;
    g.prior=f1;
    g.fidelity=g1;

    cout<<g.eval(3)<<endl;

    cout<<"Chaning the prior"<<endl;
    g.prior=f2;
    cout<<g.eval(3)<<endl;

}
