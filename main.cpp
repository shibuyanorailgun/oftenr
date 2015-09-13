#include "nr/rawimg.hpp"
#include "nr/imgmark.hpp"

using namespace nr;
using namespace cv;
using namespace std;

int main(int argc, char *argv[])
{
	Mat cvimg = imread("/home/nr/Pictures/Angel destiny.jpg", CV_LOAD_IMAGE_GRAYSCALE);

	spray_img(cvimg, 10, 10, 10);
	imshow("cvimg", cvimg);
	waitKey(0);
	
	return 0;
}
