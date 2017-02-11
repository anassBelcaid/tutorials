#include <iostream>
#include "spdbandf.h"

using namespace std;

int main(int argc, char* argv[])
{
    cout<<"Testing Cholesky decomposition"<<endl;
    int n=10;
    //Creating a diagonal dominant matrix
    SPDBandMatrix M(n,1);
    M.setDiag(0, 2.1);
    M.setDiag(1, -1);
    cout<<M<<endl;

    //inializing the solver
    SPDBandMatrixFactor solver;
    solver.factor(M);


    //Creating a vector and solving
    vector<double> b(n,1);
    std::vector<double> x=solver.solve(b);
    for(auto i=0;i<n;i++)
    cout<<x[i]<<"\t";
    cout<<endl;

    //Printing the product
    std::vector<double> residu=M*x;
    for(auto i=0;i<n;i++)
    cout<<residu[i]<<"\t";
    cout<<endl;

    return 0;
}
