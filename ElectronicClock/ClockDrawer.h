#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <format>

#include "constants.h"
#include "BaseDrawer.h"
#include "ClockDigitFactory.h"

class ClockDrawer : public BaseDrawer
{
public:
	void draw() override;
	void setDigits(std::vector<int> digits);

private:
	void constructStrings();
	std::string getSegment(int digitIndex, int segment);

	int width;
	std::vector<ClockDigit> digits;
	std::string top;
	std::string topSides;
	std::string mid;
	std::string botSides;
	std::string bot;
	
	const char borderTopElement = '_';
	const char borderBottomElement = '-';
	const char borderSideElement = '|';
	const char dot = '*';
	const std::string horizontalSegment = "- -";
	const std::string verticalSegment = "|";

};