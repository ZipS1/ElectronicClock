#include "ClockDigitFactory.h"

const bool ClockDigitFactory::zeroPattern[SEGMENTS_AMOUNT] = { 1,1,1,0,1,1,1 };
const bool ClockDigitFactory::onePattern[SEGMENTS_AMOUNT] = { 0,0,1,0,0,1,0 };
const bool ClockDigitFactory::twoPattern[SEGMENTS_AMOUNT] = { 1,0,1,1,1,0,1 };
const bool ClockDigitFactory::threePattern[SEGMENTS_AMOUNT] = { 1,0,1,1,0,1,1 };
const bool ClockDigitFactory::fourPattern[SEGMENTS_AMOUNT] = { 0,1,1,1,0,1,0 };
const bool ClockDigitFactory::fivePattern[SEGMENTS_AMOUNT] = { 1,1,0,1,0,1,1 };
const bool ClockDigitFactory::sixPattern[SEGMENTS_AMOUNT] = { 1,1,0,1,1,1,1 };
const bool ClockDigitFactory::sevenPattern[SEGMENTS_AMOUNT] = { 1,0,1,0,0,1,0 };
const bool ClockDigitFactory::eightPattern[SEGMENTS_AMOUNT] = { 1,1,1,1,1,1,1 };
const bool ClockDigitFactory::ninePattern[SEGMENTS_AMOUNT] = { 1,1,1,1,0,1,1 };

ClockDigit* ClockDigitFactory::createClockDigit(int digit)
{
    switch (digit)
    {
    case 0:
        return new ClockDigit(zeroPattern);
    case 1:
        return new ClockDigit(onePattern);
    case 2:
        return new ClockDigit(twoPattern);
    case 3:
        return new ClockDigit(threePattern);
    case 4:
        return new ClockDigit(fourPattern);
    case 5:
        return new ClockDigit(fivePattern);
    case 6:
        return new ClockDigit(sixPattern);
    case 7:
        return new ClockDigit(sevenPattern);
    case 8:
        return new ClockDigit(eightPattern);
    case 9:
        return new ClockDigit(ninePattern);
    default:
        throw new std::exception("No constructor exist for passed digit!");
    }
}
