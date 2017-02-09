/***
Choosing the size at run time and compile time
*/
#include <iostream>
#include<eigen3/Eigen/Dense>

using namespace Eigen;
using namespace::std;
int main(int argc, char const *argv[]) {

  //matrices at compile time
  Matrix3d M=Matrix3d::Random(3,3);

  //some cool operation
  M=(M+Matrix3d::Constant(1))*50;
  cout<<M<<endl;

  //vector
  Vector3d v{1,2,3};
  cout<<M*v<<endl;

  //matrices at run time
  MatrixXd MR=MatrixXd::Random(4,3);
  MR+=MatrixXd::Constant(4,3,1.2);
  cout<<MR<<endl;
  cout<<MR*v<<endl;
}
