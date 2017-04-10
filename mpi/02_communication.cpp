#include <iostream>
#include <mpi.h>
#include <time.h>
#include <cstdlib>

using namespace std;



int main(int argc, char* argv[])
{

    MPI_Init(&argc, &argv);
    int value;
    int size;
    MPI_Comm world=MPI_COMM_WORLD;
    MPI_Comm_size(world,&size);
    MPI_Status status;

    int rank;
    MPI_Comm_rank(world,&rank);



    //illustrating sending and receiving from a known processor
    if(rank==0)
    {
        srand(time(NULL));
        value=rand()%100;
        cout<<"generated value= "<<value<<endl;

        //sending the message for proc 1 with a random tag
        MPI_Send(&value, 1, MPI_INT, 1 , rand()%10, world);

    }
    else
    {
        MPI_Recv(&value, 1, MPI_INT, MPI_ANY_SOURCE, MPI_ANY_TAG, world, &status);
        cout<<"Tag of the message is "<<status.MPI_TAG<<endl;
        cout<<"Sender of the message is "<<status.MPI_SOURCE<<endl;
        
        cout<<"Received value= "<<value<<endl;
    }
    MPI_Finalize();

    return 0;
}
