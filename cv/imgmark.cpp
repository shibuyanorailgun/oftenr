/*
 * Copyright (C) Junyu Wu, shibuyanorailgun@foxmail, 2015.
 */

#include "nr/imgmark.hpp"
#include "nr/types.hpp"

namespace nr
{

void spray_img(cv::Mat img, const int r, const int c, const int radi)
{
	for (int i = -radi; i <= radi; i++) {
		if (r + i < 0 || r + i >= img.rows)
			continue;

		for (int j = -radi; j <= radi; j++) {
			if (c + j < 0 || c + j >= img.cols)
				continue;
			img.at<uchar_t>(r + i, c + j) = 0x00;
		}
	}
}

};
