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
	cout << topSides << endl;
	cout << mid << endl;
	cout << botSides << endl;
	cout << botSides << endl;
	cout << botSides << endl;
	cout << bot << endl;
	cout << string(width, borderBottomElement) << endl;
}

void ClockDrawer::setDigits(std::vector<int> digits)
{
	this->digits.clear();
	for (auto& digit : digits)
		this->digits.push_back(ClockDigitFactory::createClockDigit(digit));
}

void ClockDrawer::constructStrings()
{
	top = constructHorizontalString(TOP_SEGMENT);
	topSides = constructVerticalString(TOP_LEFT_SEGMENT, TOP_RIGHT_SEGMENT);
	mid = constructHorizontalString(MID_SEGMENT);
	botSides = constructVerticalString(BOT_LEFT_SEGMENT, BOT_RIGHT_SEGMENT);
	bot = constructHorizontalString(BOT_SEGMENT);
}

string ClockDrawer::constructVerticalString(int leftSegment, int rightSegment)
{
	string str = string(1, borderSideElement);
	for (int i = 0; i < digits.size(); i++)
	{
		if (i != 0 && i % 2 == 0)
			str += indent + dot + indent;
		str += indent + getSegment(digits[i], leftSegment) + string(3, ' ') + getSegment(digits[i], rightSegment);
	}
	str += indent + borderSideElement;
	return str;
}

string ClockDrawer::constructHorizontalString(int segment)
{
	string str = string(1, borderSideElement);
	for (int i = 0; i < digits.size(); i++)
	{
		if (i != 0 && i % 2 == 0)
			str += indent + string(dot.size(), ' ') + indent;
		str += indent + getSegment(digits[i], segment);
	}
	str += indent + borderSideElement;
	return str;
}

string ClockDrawer::getSegment(ClockDigit& digit, int segment)
{
	if (segment == TOP_SEGMENT || segment == MID_SEGMENT || segment == BOT_SEGMENT)
		return digit.isSegmentShown(segment) ? horizontalSegment : string(horizontalSegment.size(), ' ');
	else
		return digit.isSegmentShown(segment) ? verticalSegment : string(verticalSegment.size(), ' ');
}
