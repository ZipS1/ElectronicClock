#include "ClockDigit.h"

#include <iostream>
using namespace std;

ClockDigit::ClockDigit()
{
    for (int i = 0; i < SEGMENTS_AMOUNT; i++)
        this->segments[i] = false;
}

ClockDigit::ClockDigit(const bool* segments)
{
    for (int i = 0; i < SEGMENTS_AMOUNT; i++)
        this->segments[i] = segments[i];
}

/// <summary>
/// Checks if segment is shown.
/// </summary>
/// <param name="segmentIndex">
/// </param>
/// <returns> true if segment is visible. </returns>
bool ClockDigit::isSegmentShown(int segment)
{
    return segments[segment];
}
