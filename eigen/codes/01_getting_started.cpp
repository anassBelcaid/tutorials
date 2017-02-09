#include <iostream>
#include<eigen3/Eigen/Dense>

using Eigen::MatrixXd;

int main(int argc, char const *argv[]) {
  MatrixXd m(2,2);
  //filling the matrix
  m(0,0)=2; m(1,0)=-1;
  m(0,1)=-1;m(1,1)=2;
  //printing the matrix
  std::cout<<m<<std::endl;

}
