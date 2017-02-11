#include <iostream>
#include "spdband.h"
using namespace std;
SPDBandMatrix::SPDBandMatrix(const SPDBandMatrix& m)
{
    bandStorage::bandStorage(*this);
}

vector<double>& SPDBandMatrix::diagonal(const int i)
{
    return data[int(abs(i))];
}

SPDBandMatrix::SPDBandMatrix(const int k,const int upper)
{
    upperBand=upper;
    lowerBand=upper;
    n=k;
    data=vector<vector<double>> (upper+1);
    for(int i=0;i<=upper;i++)
        data[i]=std::vector<double> (n,0);


}
void SPDBandMatrix::setDiag(const int i, const double s)
{
    //function to set a given band to a constant

    //diag[i] = s;
    data[abs(i)] = vector<double> (n,s);
}

double& SPDBandMatrix::operator()(const int i, const int j)
{
    static double zero = 0.0;

      //checking if we're in the band
     if (j <= (i+upperBand) && i <= (j+lowerBand))
        if (j>=i) // upper triangle
        {

            return data[j-i].at(j);
        }
        else
            return data[i-j].at(i);
    else
        return zero;
}

ostream & operator<<(ostream & out,  SPDBandMatrix & mat)
{
    int n=mat.order();

    for(auto i=0;i<n;i++)
    {
        for(auto j=0;j<n;j++)
            out<<mat(i,j)<<"\t";
        out<<endl;
    }
    return out;
}

vector<double> SPDBandMatrix::operator*(const vector<double>& x)
{
    vector<double> y(n, double(0.0));
    vector<double> currentBand(n);
    int i, j;
    for (i=-lowerBand; i<=upperBand; i++) {
        currentBand = diagonal(i);
        if (i <= 0)
            for (j=-i; j<n; j++)
                y[j] += currentBand[j+i]*x[j+i];
        else
            for (j=0; j<n-i; j++)
                y[j] += currentBand[j]*x[j+i];
    }
    return y;
}
