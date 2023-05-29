#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <chrono>
#include <ctime>
#include <vector>
#include "constants.h"

class Clock
{
public:
	Clock();
	void tick();
	int getHours();
	int getMinutes();
	std::vector<int> getClockDigits();

private:
	int hours;
	int minutes;
	int seconds;
};