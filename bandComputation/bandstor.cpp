#include "bandstor.h"
#include <iostream>
using namespace std;

bandStorage::bandStorage(const int order)
{
    n = order;
    upperBand = 0;
    lowerBand = 0;
    data = vector< vector <double> >(1);
    data[0].reserve(n);
}

bandStorage::bandStorage(const int order,const int upper,const int lower)
{
    n=order;
    upperBand=upper;
    lowerBand=lower;
    int band=upperBand+lowerBand+1;
    data=vector<vector <double> > (band);
    for(int i=0;i<band;i++)
        data[i]=std::vector<double>(n,0);
}
vector<double>& bandStorage::diag(const int location)
{
    return data[location+lowerBand];
}

const vector<double>& bandStorage::diag(const int location) const
{
    return data[location+lowerBand];
}

double & bandStorage::operator()(const int i, const int j)
{
    static double zero = 0.0;
      //checking if we're in the band
     if (j <= (i+upperBand) && i <= (j+lowerBand))
        if (i<=j) // upper triangle
        {
            return data[j-i+lowerBand].at(i);
        }
        else
            return data[j-i+lowerBand].at(j);
    else
        return zero;
}

vector<double> bandStorage::operator*(const vector<double>& x) const
{
    vector<double> y(n, double(0.0));
    vector<double> currentBand(n);
    int i, j;
    for (i=-lowerBand; i<=upperBand; i++) {
        currentBand = diag(i);
        if (i <= 0)
            for (j=-i; j<n; j++)
                y[j] += currentBand[j+i]*x[j+i];
        else
            for (j=0; j<n-i; j++)
                y[j] += currentBand[j]*x[j+i];
    }
    return y;
}

void bandStorage::print()const
{
    //simple function to print in compact form
    int band=data.size();
    for(auto d=band-1;d>=0;d--)
    {
        for(auto i=0;i<data[d].size();i++)
            cout<<data[d].at(i)<<" ";
        cout<<endl;
    }
}

ostream & operator<<(ostream & out,  bandStorage & mat)
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
