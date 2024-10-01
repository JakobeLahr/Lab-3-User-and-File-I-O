#include "StdMean.h"
#include <cmath>

float meanD = 4.0f;

float StatsCalc::mean(int x1, int x2, int x3, int x4)
{
	calcMean = (x1 + x2 + x3 + x4) / meanD;
	return calcMean;
}
