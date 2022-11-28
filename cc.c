#include "cc.h"

float factor_frequency(struct edf *edf)
{
    float frequency = 0.01;
    for (int i = 0; i < 100; i++)
    {
        if (edf_test(edf, frequency))
            return frequency;
        frequency += 0.01;
    }
}