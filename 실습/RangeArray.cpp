#include "Array.h"
#include "RangeArray.h"
#include <iostream>

using namespace std;

RangeArray::RangeArray(int baseV, int endV) : Array(endV-baseV+1), low(baseV), high(endV) {}
RangeArray::~RangeArray() {}
int& RangeArray::operator[](int i) { return Array::operator[](i - low); }
int RangeArray::operator[](int i) const { return Array::operator[](i - low); }
int RangeArray::baseValue() { return low; }
int RangeArray::endValue() { return high; }

