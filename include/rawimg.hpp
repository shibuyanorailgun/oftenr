/*
 * Copyright (C) Junyu Wu, shibuyanorailgun@foxmail, 2015.
 */

#ifndef __OFTENR_RAWIMG_H
#define __OFTENR_RAWIMG_H

#include "linux.hpp"
#include "cv.hpp"

namespace nr
{

template <typename Dtype>
cv::Mat RawImageToCvMat(const Dtype *raw, const cv::Size &sz,
	const int depth = CV_8U, const int chn = 1)
{
	Dtype *_raw;
	size_t msz = sz.width * sz.height * chn * sizeof(Dtype);
	
	_raw = (Dtype *) ::operator new(msz);
	memcpy(_raw, raw, msz);
	cv::Mat img(sz, CV_MAKE_TYPE(depth, chn), _raw, cv::Mat::AUTO_STEP);
	
	return img;
}

template <typename Dtype>
cv::Mat RawImageToCvMat(const Dtype *raw, const int w, const int h,
	const int depth = CV_8U, const int chn = 1) {
	return RawImageToCvMat(raw, cv::Size(w, h), depth, chn);
}

cv::Mat RawImageToCvMat(const std::string raw, const cv::Size &sz,
	const int depth = CV_8U, const int chn = 1) {
	return RawImageToCvMat(raw.c_str(), sz, depth, chn);
}

cv::Mat RawImageToCvMat(const std::string raw, const int w, const int h,
	const int depth = CV_8U, const int chn = 1) {
	return RawImageToCvMat(raw, cv::Size(w, h), depth, chn);
}

}; // end namespace nr

#endif /* end of include guard: __OFTENR_RAWIMG_H */
