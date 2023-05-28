#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <chrono>
#include <ctime>
#include <memory>
#include "constants.h"

class Clock
{
public:
	Clock();
	void tick();
	int getHours();
	int getMinutes();
	std::unique_ptr<int[]> getClockDigits();

private:
	int hours;
	int minutes;
	int seconds;
};