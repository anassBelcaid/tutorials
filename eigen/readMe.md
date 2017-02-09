# Notes on the Eigen tutorial

In this repo I will try to put my note on learning the basic notion of [eigen](http://eigen.tuxfamily.org/dox/GettingStarted.html). Initially, I wanted to write all my codes using the **STL** library but it turned out that **Eigen** is the choice  on two of  codes on machine learning like

* [S.Gould Darwin](http://drwn.anu.edu.au).
* [pletecher code](https://github.com/ppletscher/lpqp).

## A simple program

Here is a simple program that include the library and print a simple matrix.

```cpp
#include<iostream>
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
```

for compiling I used a the following cmake configuration file.

```cmake
# cmake for compiling c++ with openMp and c11
cmake_minimum_required(VERSION 2.9)
project(eigen)
set(CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_FLAGS "-fopenmp")
set(CMAKE_CXX_COMPILER clang-omp++)
```
## The matrix Class

The matrix class takes 6 template arguments, we will learn to specify the first 3 as the remaining ones have default values.

```cpp
Matrix<typename Scalar,int RowsAtCompileTime, int ColsAtCompileTime>
```

for example
```cpp
typedef Matrix(double,4,4) matrix4d
```
We could specify the value `Dynamic` for unkown number of


The matrix class has all the operations like `Matlab` with addition to class `array` which perform component wise instead of the mathematical operator.

## Block operations

Eigen offer a seemless use of block matrices as an *lvalues* and *rvalues*.

```cpp
matrix.block(i,j,p,q);       #dynamic choice of p and q
matrix.block<p,q>(i,j)
```
