/*
 * Copyright (C) Junyu Wu, shibuyanorailgun@foxmail, 2015.
 */

#ifndef __OFTENR_NR_MEMDUP_H
#define __OFTENR_NR_MEMDUP_H

#include "nr/linux.hpp"

namespace nr
{

template <typename Dtype>
Dtype *memdup(const Dtype *src, const size_t cnt)
{
	size_t sz = sizeof(Dtype) * cnt;
	Dtype *dst = (Dtype *) ::operator new (sz);
	memcpy(dst, src, sz);

	return dst;
}

};

#endif /* end of include guard: __OFTENR_NR_MEMDUP_H */
