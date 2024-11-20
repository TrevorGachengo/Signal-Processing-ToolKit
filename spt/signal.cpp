#include "signal.h"

Signal::Signal(float _amplitude, float _frequency, float _phase) {
    amplitude = _amplitude;
    frequency = _frequency;
    phase = _phase;
}

float Signal::evaluate(float t) {
    return amplitude * sin(2.0 * M_PI * frequency * t + phase);
}
