#ifndef SPDBANDF_H
#define SPDBANDF_H

#include "spdband.h"

class SPDBandMatrixFactor
{
private:
    SPDBandMatrix *mat;       //pointer to an initial matrix
public:
    SPDBandMatrixFactor() {mat=NULL;}
    void factor(SPDBandMatrix&);
    vector<double> solve(vector<double>&);
};


#endif
