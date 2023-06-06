#include "ClockDigitFactory.h"

const bool ClockDigitFactory::zeroPattern[ClockDigit::segmentsAmount] = { 1,1,1,0,1,1,1 };
const bool ClockDigitFactory::onePattern[ClockDigit::segmentsAmount] = { 0,0,1,0,0,1,0 };
const bool ClockDigitFactory::twoPattern[ClockDigit::segmentsAmount] = { 1,0,1,1,1,0,1 };
const bool ClockDigitFactory::threePattern[ClockDigit::segmentsAmount] = { 1,0,1,1,0,1,1 };
const bool ClockDigitFactory::fourPattern[ClockDigit::segmentsAmount] = { 0,1,1,1,0,1,0 };
const bool ClockDigitFactory::fivePattern[ClockDigit::segmentsAmount] = { 1,1,0,1,0,1,1 };
const bool ClockDigitFactory::sixPattern[ClockDigit::segmentsAmount] = { 1,1,0,1,1,1,1 };
const bool ClockDigitFactory::sevenPattern[ClockDigit::segmentsAmount] = { 1,0,1,0,0,1,0 };
const bool ClockDigitFactory::eightPattern[ClockDigit::segmentsAmount] = { 1,1,1,1,1,1,1 };
const bool ClockDigitFactory::ninePattern[ClockDigit::segmentsAmount] = { 1,1,1,1,0,1,1 };

ClockDigit ClockDigitFactory::createClockDigit(int digit)
{
    switch (digit)
    {
    case 0:
        return ClockDigit(zeroPattern);
    case 1:
        return ClockDigit(onePattern);
    case 2:
        return ClockDigit(twoPattern);
    case 3:
        return ClockDigit(threePattern);
    case 4:
        return ClockDigit(fourPattern);
    case 5:
        return ClockDigit(fivePattern);
    case 6:
        return ClockDigit(sixPattern);
    case 7:
        return ClockDigit(sevenPattern);
    case 8:
        return ClockDigit(eightPattern);
    case 9:
        return ClockDigit(ninePattern);
    default:
        throw new std::exception("No constructor exist for passed digit!");
    }
}
