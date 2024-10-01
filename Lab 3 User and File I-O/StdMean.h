#ifndef STATSCALC_H
#define STATSCALC_H
#include <cmath>

class StatsCalc
{
public:
    StatsCalc() {};
    ~StatsCalc() {};

    float mean(int x1, int x2, int x3, int x4);

    float stddev(int x1, int x2, int x3, int x4)
    {
        float me = mean(x1, x2, x3, x4);            // Stores mean in me so that i can use it for stddev

        float variance = ((x1 - me) * (x1 - me) +
            (x2 - me) * (x2 - me) +
            (x3 - me) * (x3 - me) +
            (x4 - me) * (x4 - me)) / 4.0f;

        return std::sqrt(variance);
    }
private:
    float calcMean = 4.0f;
};

#endif // !STATSCALC_H


