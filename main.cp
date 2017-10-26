#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
using namespace std;

int main(int argc, char *arcv[]) {
    
    Mat img;
    Mat dst;
    Mat kernel;
    Point anchor;
    double delta;
    int ddepth;
    
    img = imread("/Users/damh/Documents/Xcode projects/test/Test/Test/enhance-me.png", CV_LOAD_IMAGE_COLOR);
    
    namedWindow("edgeD", CV_WINDOW_AUTOSIZE);
    anchor = Point(-1,-1);
    delta = 0;
    ddepth = -1;
    
    kernel = (Mat_ <double> (3,3) << -1, 0, 1, -2, 0, 2, -1, 0 ,1);
    
    filter2D(img, dst, ddepth, kernel, anchor, delta, BORDER_DEFAULT);
    imshow("edgeD", dst);
    waitKey(0);
    
    return 0;
}
