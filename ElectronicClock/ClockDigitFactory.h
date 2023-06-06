#pragma once
#include <exception>
#include "ClockDigit.h"

static class ClockDigitFactory
{
public:
	static ClockDigit createClockDigit(int digit);

private:
	static const bool zeroPattern[ClockDigit::segmentsAmount];
	static const bool onePattern[ClockDigit::segmentsAmount];
	static const bool twoPattern[ClockDigit::segmentsAmount];
	static const bool threePattern[ClockDigit::segmentsAmount];
	static const bool fourPattern[ClockDigit::segmentsAmount];
	static const bool fivePattern[ClockDigit::segmentsAmount];
	static const bool sixPattern[ClockDigit::segmentsAmount];
	static const bool sevenPattern[ClockDigit::segmentsAmount];
	static const bool eightPattern[ClockDigit::segmentsAmount];
	static const bool ninePattern[ClockDigit::segmentsAmount];
};