#include "Edge_Detection.hpp"

cv::Mat EdgeDetection::read_image(String s){

	Input = imread(s, 0);

	if(Input.empty())
	{
	  cerr << "Error loading image" << endl;
	  //return -1;
	}

	return Input;

}

int EdgeDetection::edge_detection(Mat Edge_ip){

	/// Canny detector
    cv::Canny( Edge_ip, Edge_Det, lowThreshold, lowThreshold*ratio, kernel_size );
    //Edge_Det.copyTo(Edge_Det, Output);
    imshow("Edges", Edge_Det);
    waitKey(0);

    return 0;
}
