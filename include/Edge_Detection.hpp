#ifndef _EDGE_DET
#define _EDGE_DET

#include <iostream>
#include <string>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"

using namespace std;
using namespace cv;

class EdgeDetection{

public:
	Mat read_image(String s);
	int edge_detection(Mat);
	Mat Input, Output;

private:
	Mat Edge_Det;
	int lowThreshold = 5;
	int kernel_size = 3;
	int ratio = 5;

};
#endif
