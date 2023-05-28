#pragma once
#include "constants.h"

class ClockDigit
{
public:
	ClockDigit();
	ClockDigit(const bool* segments);
	bool isSegmentShown(int segmentIndex);

private:
	bool segments[SEGMENTS_AMOUNT];

};