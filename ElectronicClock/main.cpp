#include "Clock.h"

#include <iostream>

int main()
{
	Clock* clock = new Clock();
	unique_ptr<int[]> digits = clock->getTimeDigits();
	for (int i = 0; i < 4; i++)
		cout << digits[i] << " " << endl;
	
	delete clock;
}