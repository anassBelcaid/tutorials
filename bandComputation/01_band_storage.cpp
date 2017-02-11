#include <iostream>
#include "bandstor.h"

using namespace std;

int main(int argc, char* argv[])
{
    cout<<"Testing the BandStorage class "<<endl;

    //Creating a Matrix with 2 uper diagonals and 1 subdiagonal
    bandStorage M(5,2,1);
    M.diag(0)=vector<double> (5,4);
    M.diag(-1)=std::vector<double> (5,-1);
    M.diag(1)=std::vector<double> (4,1);
    M.diag(2)=std::vector<double> (3,0.5);
    cout<<M<<endl;

    std::vector<double> b(5,1);
    std::vector<double> C=M*b;

    for(auto i=0;i<5;i++)
    cout<<C[i]<<" ";
    cout<<endl;
    return 0;
}
