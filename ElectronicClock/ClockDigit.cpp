#include "ClockDigit.h"

#include <iostream>
using namespace std;

ClockDigit::ClockDigit(const bool* segments)
{
    for (int i = 0; i < segmentsAmount; i++)
        this->segments[i] = segments[i];
}

bool ClockDigit::isSegmentShown(Segment segment)
{
    return false;
}