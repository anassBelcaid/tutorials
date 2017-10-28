#include <iostream>
#include <opencv/highgui.h>
using namespace std;

int main(int argc, char *argv[])
{
    //loading the image
    IplImage *img=cvLoadImage(argv[1]);

    //creating the window
    cvNamedWindow("Example 1");

    //showing the image
    cvShowImage("My heart",img);

    //releasing
    cvWaitKey(0);
    cvReleaseImage(&img);
    cvDestroyWindow("Example 1");
    return 0;
}
