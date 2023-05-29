#include "ClockDrawer.h"

using namespace std;

void ClockDrawer::draw()
{
	constructStrings();
	width = top.size();

	system("cls");
	cout << string(width, borderTopElement) << endl;
	cout << top << endl;
	cout << topSides << endl;
	cout << topSides << endl;
	cout << mid << endl;
	cout << botSides << endl;
	cout << botSides << endl;
	cout << bot << endl;
	cout << string(width, borderBottomElement) << endl;
}

void ClockDrawer::setDigits(std::vector<int> digits)
{
	if (digits.size() != 6)
		throw exception("There should be exactly 6 digits");

	this->digits.clear();
	for (auto& digit : digits)
	{
		ClockDigit* digitPtr = ClockDigitFactory::createClockDigit(digit);
		this->digits.push_back(*digitPtr);
		delete digitPtr;
	}
}

void ClockDrawer::constructStrings()
{
	top = borderSideElement;
	for (int i = 0; i < digits.size(); i++)
	{
		if (i != 0 && i % 2 == 0)
			top += indent + ' ' + indent;
		top += indent + " " + getSegment(digits[i], TOP_SEGMENT) + " ";
	}
	top += indent + borderSideElement;

	topSides = borderSideElement;
	for (int i = 0; i < digits.size(); i++)
	{
		if (i != 0 && i % 2 == 0)
			topSides += indent + dot + indent;
		topSides += indent + getSegment(digits[i], TOP_LEFT_SEGMENT) + "   " + getSegment(digits[i], TOP_RIGHT_SEGMENT);
	}
	topSides += indent + borderSideElement;

	mid = borderSideElement;
	for (int i = 0; i < digits.size(); i++)
	{
		if (i != 0 && i % 2 == 0)
			mid += indent + ' ' + indent;
		mid += indent + " " + getSegment(digits[i], MID_SEGMENT) + " ";
	}
	mid += indent + borderSideElement;

	botSides = borderSideElement;
	for (int i = 0; i < digits.size(); i++)
	{
		if (i != 0 && i % 2 == 0)
			botSides += indent + dot + indent;
		botSides += indent + getSegment(digits[i], BOT_LEFT_SEGMENT) + "   " + getSegment(digits[i], BOT_RIGHT_SEGMENT);
	}
	botSides += indent + borderSideElement;

	bot = borderSideElement;
	for (int i = 0; i < digits.size(); i++)
	{
		if (i != 0 && i % 2 == 0)
			bot += indent + ' ' + indent;
		bot += indent + " " + getSegment(digits[i], BOT_SEGMENT) + " ";
	}
	bot += indent + borderSideElement;
}

std::string ClockDrawer::getSegment(ClockDigit& digit, int segment)
{
	if (segment == 0 || segment == 3 || segment == 6)
		return digit.isSegmentShown(segment) ? horizontalSegment : string(horizontalSegment.size(), ' ');
	else
		return digit.isSegmentShown(segment) ? verticalSegment : string(verticalSegment.size(), ' ');
}
