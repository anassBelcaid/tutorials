/***
Working with blocks of matrices
*/
#include <iostream>
#include<eigen3/Eigen/Dense>

using namespace Eigen;
using namespace::std;
int main(int argc, char const *argv[]) {

  Matrix4d M;
  M<<1,2,3,4
    ,5,6,7,8
    ,9,10,11,12,
    13,14,15,16;

  for(int i=1;i<=4;i++)
  {
    cout<<"Block size="<<i<<endl;
    cout<<M.block(0,0,i,i)<<endl;
  }

}
