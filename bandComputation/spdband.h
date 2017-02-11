#ifndef SPDBAND_H
#define SPDBAND_H
#include "bandstor.h"

class SPDBandMatrix : public bandStorage
{
private:

public:
    SPDBandMatrix() {}
    SPDBandMatrix(const SPDBandMatrix&);
    SPDBandMatrix(const int k) : bandStorage(k) {}
    SPDBandMatrix(const int ,const int);
    vector<double>& diagonal(const int);
    void setDiag(const int, const double);
    inline int  & bandWidth(void) {return lowerBandWidth();}

    //Redefinition of the accesser
    double& operator()(const int, const int);
    vector<double> operator*(const vector<double>&);
    SPDBandMatrix operator*(SPDBandMatrix & B);
    friend
    ostream & operator<<(ostream & , SPDBandMatrix &);

};
#endif
//End of File
