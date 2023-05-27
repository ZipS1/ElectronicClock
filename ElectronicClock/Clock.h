#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <chrono>
#include <ctime>
#include <memory>

using namespace std;
using namespace std::chrono;

class Clock
{
public:
	Clock();
	void tick();
	int getHours();
	int getMinutes();
	unique_ptr<int[]> getTimeDigits();

private:
	int hours;
	int minutes;
	int seconds;
};