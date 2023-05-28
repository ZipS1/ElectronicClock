#pragma once
#include <exception>
#include <memory>
#include "ClockDigit.h"

static class ClockDigitFactory
{
public:
	static ClockDigit* createClockDigit(int digit);

private:
	static const bool zeroPattern[SEGMENTS_AMOUNT];
	static const bool onePattern[SEGMENTS_AMOUNT];
	static const bool twoPattern[SEGMENTS_AMOUNT];
	static const bool threePattern[SEGMENTS_AMOUNT];
	static const bool fourPattern[SEGMENTS_AMOUNT];
	static const bool fivePattern[SEGMENTS_AMOUNT];
	static const bool sixPattern[SEGMENTS_AMOUNT];
	static const bool sevenPattern[SEGMENTS_AMOUNT];
	static const bool eightPattern[SEGMENTS_AMOUNT];
	static const bool ninePattern[SEGMENTS_AMOUNT];
};