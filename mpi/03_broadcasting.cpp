#include <iostream>
#include <mpi.h>
#include <time.h>
#include <cstdlib>
#include <vector>

using namespace std;



int main(int argc, char* argv[])
{

    MPI_Init(&argc, &argv);
    std::vector<double> A;
    int size;
    MPI_Comm world=MPI_COMM_WORLD;
    MPI_Comm_size(world,&size);
    MPI_Status status;

    int rank;
    MPI_Comm_rank(world,&rank);
    A.reserve(10);
    if(rank==0)
        {
            srand(time(NULL));
            for(auto i=0;i<10;i++)
                A[i]=rand()%100;

            }
    //scattering the data
    MPI_Bcast(A.data() , 10, MPI_DOUBLE, 0, world);
    for(auto i=0;i<10;i++)cout<<A[i]<<" ";
    cout<<endl;


    //REducing

    MPI_Finalize();

    return 0;
}
