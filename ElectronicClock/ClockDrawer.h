#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <stdlib.h>

#include "constants.h"
#include "BaseDrawer.h"
#include "ClockDigitFactory.h"

class ClockDrawer : public BaseClockDrawer
{
public:
	void draw() override;
	void setDigits(std::vector<int> digits) override;

private:
	void constructStrings();
	std::string constructVerticalString(int leftSegment, int rightSegment);
	std::string constructHorizontalString(int segment);
	std::string getSegment(ClockDigit& digit, int segment);

	int width;
	int digitWidth;
	std::vector<ClockDigit> digits;
	std::string top;
	std::string topSides;
	std::string mid;
	std::string botSides;
	std::string bot;
	
	const char borderTopElement = '-';
	const char borderBottomElement = '-';
	const char borderSideElement = '|';
	const std::string dot = "*";
	const std::string horizontalSegment = "# # #";
	const std::string verticalSegment = "|";
	const std::string indent = std::string(2, ' ');
};