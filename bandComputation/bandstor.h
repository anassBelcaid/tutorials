#ifndef BANDSTOR_H
#define BANDSTOR_H

#include <iostream>
#include <cmath>
#include <vector>
using std::vector;
using std::ostream;

inline int MAX(int i, int j) { return (i>j ? i : j);}
inline int MIN(int i, int j) { return (i<j ? i : j);}


class bandStorage
{
private:
    int n;
    int upperBand;
    int lowerBand;

    vector< vector <double> > data;

public:
        bandStorage() : n(0),
        upperBand(0),
        lowerBand(0),
        data(0) {}
    bandStorage(const int);
    bandStorage(const int,const int, const int);
    bandStorage & operator=(const bandStorage&);
    inline int order() const {return n;};
    inline int & upperBandWidth(void) {return upperBand;}
    inline int & lowerBandWidth(void) {return lowerBand;}
    vector<double> & diag(const int);
    const vector<double> & diag(const int) const;
    double& operator()(const int, const int);
    vector<double> operator*(const vector<double>&) const;
    void print()const;
    friend
    ostream & operator<<(ostream & out, bandStorage& mat);
};



#endif
/* End of File */
