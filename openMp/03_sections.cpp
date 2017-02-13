#include <iostream>
#include <omp.h>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
    int n=20;
    std::vector<double> A(n,1),B(n,2),C(n,0),D(n,0);

    int i;

    //computing the sum and the product each in one section

    #pragma omp parallel shared(A,B,C,D) private(i)
    {
        #pragma omp sections nowait
        {
            #pragma omp section
            for(i=0;i<n;i++)
                C[i]=A[i]+B[i];

            #pragma omp section
            for(i=0;i<n;i++)
                D[i]=A[i]*B[i];

        }
    }

    for(auto j=0;j<n;j++)
        cout<<D[j]<<" ";
    cout<<endl;

    return 0;
}
