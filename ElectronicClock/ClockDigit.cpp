#include "ClockDigit.h"

#include <iostream>
using namespace std;

ClockDigit::ClockDigit(const bool* segments)
{
    for (int i = 0; i < SEGMENTS_AMOUNT; i++)
        this->segments[i] = segments[i];
}

bool ClockDigit::isSegmentShown(int segment)
{
    return segments[segment];
}
