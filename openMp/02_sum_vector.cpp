#include <omp.h>
#include <iostream>
#include <vector>

using namespace std;

template<class T> ostream & operator<<(ostream & out, const vector<T> & A)
{
    out<<endl;
    for(auto i=0;i<A.size();i++)
        out<<A[i]<<" ";
    out<<endl;
    return out;
}
int main(int argc, char* argv[])
{
    int id;
    int numThreads;
    int i;
    omp_set_num_threads(4);
    int n=40;
    int chunk=10;
    vector<double> A(n,1);
    vector<double> B(n,2);
    vector<double> C(n,0);
    #pragma omp parallel private(id,i) shared(A,B,C,chunk)
    {
        id=omp_get_thread_num();
        numThreads=omp_get_num_threads();
        #pragma omp for schedule(dynamic,chunk) nowait
        for(i=0;i<n;i++)
        {
            string message="thread "+to_string(id)+" will update  i= "+to_string(i)+"\n";
            cout<<message;
            C[i]=A[i]+B[i];
        }
    }
    cout<<C;
    return 0;
}
