//
// Created by anass belcaid on 06/06/2017.
//

#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
using namespace cv;
using namespace std;
const char * window_name="My heart";
int main(int argc, char * argv[])
{
    Mat M(2,2,CV_8U,Scalar(0,0,255));
    cout<<"M= \n"<<M<<endl;

    //Matlab style
    Mat E=Mat::eye(2,2,CV_64F);
    cout<<E<<endl;

    Mat O=Mat::ones(3,3,CV_64F);
    cout<<O<<endl;

    //list initializer
    Mat S=(Mat_<double>(3,3)<<1,2,3,4,5,6,7,8,9);
    cout<<S<<endl;

    Mat R=S.row(1).clone();
    cout<<R<<endl;

    R=Mat(3,2,CV_64F);
    randu(R,Scalar::all(0),Scalar::all(10));
    cout<<R<<endl;


    //formatting the output
    cout<<"Default"<<endl<<format(R,"C")<<endl;

    //other vectors
    Point2d P(0,1);
    cout<<"P= "<<P<<endl;
    Point3d P3(0,1,2);
    cout<<"P= "<<P3<<endl;

    //constructor with vector
    vector<float> F;
    F.push_back(CV_PI); F.push_back(-3); F.push_back(4);
    cout<<"Mat form vector"<<Mat(F)<<endl;

    //vector of points
    vector<Point2d> points(20);
    for(size_t i=0;i<points.size();i++)
        points[i] = Point2f((float)(i * 5), (float)(i % 7));

    cout<<points<<endl;
    return 0;

}