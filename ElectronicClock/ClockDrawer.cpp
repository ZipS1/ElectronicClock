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
	top = " top string ";
	topSides = " top side string ";
	mid = " mid string ";
	botSides = " bot sides string ";
	bot = "bot string ";
}

std::string ClockDrawer::getSegment(int digitIndex, int segment)
{
	if (segment == 0 || segment == 3 || segment == 6)
		return digits[digitIndex].isSegmentShown(segment) ? horizontalSegment : string(horizontalSegment.size(), ' ');
	else
		return digits[digitIndex].isSegmentShown(segment) ? verticalSegment : string(verticalSegment.size(), ' ');
}
