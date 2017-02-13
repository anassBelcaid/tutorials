#include <iostream>
#include <omp.h>
using namespace std;
int main(int argc, char* argv[])
{
    int numThreads;
    int myid;

    omp_set_num_threads(atoi(argv[1]));

    #pragma omp parallel private(myid)
    {
        myid=omp_get_thread_num();
        string message="Hello from proc "+to_string(myid)+"\n";
        cout<<message;
        if(myid==0)
        {
            numThreads=omp_get_num_threads();
            cout<<"Num of threads is="<<numThreads<<endl;
        }
    }
    return 0;
}
