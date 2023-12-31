#ifndef ENCHASE_BLUR_1600480088460_H
#define ENCHASE_BLUR_1600480088460_H
#include "imagematrix.h"
#include "ccglobal/tracer.h"

namespace enchase
{
	void blur(MatrixF* matrix, int blurNum, ccglobal::Tracer* tracer);
	void blur(MatrixF* matrix, int blurNum);
    void blur(MatrixU* matrix, int blurNum);
}

#endif // ENCHASE_BLUR_1600480088460_H