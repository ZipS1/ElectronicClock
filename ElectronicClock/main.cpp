#include "Clock.h"

#include <iostream>

int main()
{
	unique_ptr<Clock> clock(new Clock());
	unique_ptr<int[]> digits = clock->getClockDigits();
	for (int i = 0; i < 4; i++)
		cout << digits[i] << " " << endl;
}