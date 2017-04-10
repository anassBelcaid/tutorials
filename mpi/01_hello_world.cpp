#include <iostream>
#include <mpi.h>
using namespace std;

int main(int argc, char* argv[])
{
    MPI_Init(&argc, &argv);

    //getting the value of communicator size
    int size;
    int rank;
    //computing the size of the communicator
    MPI_Comm_size(MPI_COMM_WORLD,&size);


    //getting my randk
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    //printing
    cout<<"Im process "<<rank<<" of "<<size<<" processors"<<endl;
    MPI_Finalize();
    return 0;
}
