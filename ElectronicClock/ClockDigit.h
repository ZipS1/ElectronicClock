#pragma once

enum class Segment {Top, TopLeft, TopRight, Mid, BotLeft, BotRight, Bot};
class ClockDigit
{
public:
	ClockDigit(const bool* segments);
	bool isSegmentShown(Segment segment);
	static const size_t segmentsAmount = 7;

private:
	bool segments[segmentsAmount];
};

