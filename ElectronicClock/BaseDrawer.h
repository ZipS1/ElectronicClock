#pragma once

class BaseClockDrawer
{
public:
	virtual void draw() = 0;
	virtual void setDigits(std::vector<int> digits) = 0;
};