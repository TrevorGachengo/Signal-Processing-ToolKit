#ifndef STRUCT_H
#define STRUCT_H
#include <cmath>

struct Signal{
    // A * sin((2*pi*f)t + phase)
    float amplitude, frequency, phase;
    Signal(float _amplitude, float _frequency, float _phase);

    float evaluate(float t);
};

#endif