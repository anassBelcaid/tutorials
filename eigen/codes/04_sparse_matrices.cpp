#include <iostream>
#include <Eigen3/Eigen/sparse>
using namespace std;
using namespace Eigen;
typedef SparseMatrix<double,RowMajor> spMat;
int main(int argc, char const *argv[]) {

  //Solving the classical tridiagonal system
  assert(argc==2);
  int n=atof(argv[1]);
  spMat A(n,n);

  //Reserving the non-negative entries
  A.reserve(VectorXi::Constant(n,3));

  for(auto i=0;i<n-1;i++)
  {

    A.coeffRef(i, i)+=1.1;
    A.coeffRef(i,i+1)+=-1;
  }
  for(auto i=1;i<n;i++)
  {
    A.coeffRef(i,i)+=1;
    A.coeffRef(i,i-1)+=-1;
  }
  A.makeCompressed();

  //Filling the second member
  VectorXd b=VectorXd::Constant(n,1);      //surely could be done more properly

  //Solving the system
  SparseLU<spMat> solver;
  solver.compute(A);

  //Checking the decomposition
  if(solver.info()!=Success)
  {
    cout<<"Decomposition failed"<<endl;
  }

  //Solving the system
  VectorXd x=solver.solve(b);
  if(solver.info()!=Success)
  {
    cout<<"Could not compute the solution"<<endl;
  }
  VectorXd residual=A*x-b;
  cout<<residual.lpNorm<2>()<<endl;
  return 0;
}
