#include "output.h"

void output_signal_equation(Signal signal){
    if (signal.phase == 0.0){
        printf("%.2f * sin(2*pi*(%.2f)*t)\n", signal.amplitude, signal.frequency);
    } else {
        printf("%.2f * sin(2*pi*(%.2f)*t + %.2f)\n", signal.amplitude, signal.frequency, signal.phase);
    }
    
}