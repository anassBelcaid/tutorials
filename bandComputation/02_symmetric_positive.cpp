/** programm to test a symmetric positive definite storage
*/

#include <iostream>
#include "spdband.h"

using namespace std;

int main(int argc, char* argv[])
{
    cout<<"Testing symmetric storage"<<endl;

    SPDBandMatrix M(5,2);
    M.setDiag(0, 2);
    M.setDiag(1, -1);
    M.setDiag(2, -0.5);
    cout<<M<<endl;


    //Testing vector product
    std::vector<double> b(5,2);

    std::vector<double> x=M*b;
    for(auto i=0;i<5;i++)
        cout<<x[i]<<" ";
    cout<<endl;
    return 0;
}
