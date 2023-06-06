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
	top = constructHorizontalString(Segment::Top);
	topSides = constructVerticalString(Segment::TopLeft, Segment::TopRight);
	mid = constructHorizontalString(Segment::Mid);
	botSides = constructVerticalString(Segment::BotLeft, Segment::BotRight);
	bot = constructHorizontalString(Segment::Bot);
}

string ClockDrawer::constructVerticalString(Segment leftSegment, Segment rightSegment)
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

string ClockDrawer::constructHorizontalString(Segment segment)
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

string ClockDrawer::getSegment(ClockDigit& digit, Segment segment)
{
	if (segment == Segment::Top || segment == Segment::Mid || segment == Segment::Bot)
		return digit.isSegmentShown(segment) ? horizontalSegment : string(horizontalSegment.size(), ' ');
	else
		return digit.isSegmentShown(segment) ? verticalSegment : string(verticalSegment.size(), ' ');
}
