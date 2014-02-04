#include <opencv\highgui.h>
#include <opencv\cv.h>


//using namespace cv;

int main(int argc, char** argv){

	cv::Mat image_test = cv::imread("image/aurora.jpg");

	cv::imshow("Test Image Show", image_test);

	cv::waitKey(0);

	return 0;
}