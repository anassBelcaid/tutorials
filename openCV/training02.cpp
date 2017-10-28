//
// Created by anass belcaid on 07/06/2017.
//

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <sstream>
using namespace cv;
using namespace std;

const char * windowName="Window";
using myMat=vector<vector<double>>;

ostream &operator <<(ostream & out, const myMat & M)
{
    for(auto L: M)
    {
        for(auto v: L)
            out<<v<<", ";
        out<<endl;
    }

    return out;
}
int main(int argc, char * argv[])
{
    vector<double> M{1,2,3,4,5,6,7,8,9};
    Mat view=Mat(3,3,CV_64F,M.data());
    cout<<view<<endl;
    Mat im=imread(argv[1]);
    imshow(windowName,im);
    waitKey(0);

    //kernel
    Mat kern=(Mat_<char>(3,3)<<0,-1,0,-1,5,-1,0,-1,0);
    Mat K;
    filter2D(im,K,im.depth(),kern);
    imshow(windowName,K);
    waitKey(0);
    return 0;



}
