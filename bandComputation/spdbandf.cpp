#include "spdbandf.h"

void SPDBandMatrixFactor::factor(SPDBandMatrix& B)
{
    int bandWidth=B.lowerBandWidth();
    std::cout<<"B lower band is ="<<bandWidth<<std::endl;
    mat=new SPDBandMatrix(B.order(),bandWidth);
    int i, j, k, lambda;
    int n = B.order();

    double sqrtDiag;
    vector<double> tmp;

    for (i=0; i<=bandWidth; i++)
        mat->diagonal(i) = B.diagonal(i);

        for (j=1; j<=n; j++){
            for (k=MAX(1, j-bandWidth); k<=j-1; k++) {
                lambda = MIN(k+bandWidth, n);
                for (i=j; i<=lambda; i++){
                    (*mat)(i-1,j-1) -= (*mat)(j-1,
                        k-1)*(*mat)(i-1,k-1);
                    }
                }

            lambda = MIN(j+bandWidth, n);
            sqrtDiag = sqrt((*mat)(j-1,j-1));
            for (i=j; i<=lambda; i++)
                (*mat)(i-1,j-1) /= sqrtDiag;
        }
}

vector<double> SPDBandMatrixFactor::solve(vector<double> &b)
{
    int n = mat->order();
    vector<double> x(n);
    int i, j;
    int width = 1+2*mat->upperBandWidth();
    double sum;
    x = b;

// forward elimination

    for (i=1; i<=n; i++) {
        sum = 0.0f;
        for (j=MAX(1,i-width); j<=i-1; j++)
            sum += (*mat)(i-1,j-1)*x[j-1];
        x[i-1] = (x[i-1] - sum)/(*mat)(i-1,i-1);
        }

// back substitution

    for (i=n; i>=1; i--) {
        sum = 0.0f;
        for (j=i+1; j<=MIN(i+width,n); j++)
            sum += (*mat)(j-1,i-1)*x[j-1];
        x[i-1] = (x[i-1] - sum)/(*mat)(i-1,i-1);
        }
    return x;
}
