#ifndef __RANGEARRAY__
#define __RANGEARRAY__

#include "Array.h"

class RangeArray : public Array
{
	protected:
		int low;
		int high;
	public:
		RangeArray(int, int);
		~RangeArray();
		int&operator[](int i);
		int operator[](int i) const;
		int baseValue();
		int endValue();
};

#endif


