#include <iostream>
#include <ctype.h>
#include <opencv2/opencv.hpp>
#include "opencv2/highgui/highgui.hpp"

using namespace std;

int main () {
	cout<<"HELLO WORLD\n";

	cv::VideoCapture cap(0);
	cv::Mat frame;

	cv::namedWindow("Camera", 1);
	for (;;) {
		cap >> frame;
		cv::imshow("Camera", frame);

		if (cv::waitKey(30) >= 0) break;
	}
	return 0;
}