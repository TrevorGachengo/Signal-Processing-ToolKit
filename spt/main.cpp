#include <vector>
#include <iostream>
#include <map>
#include <cmath>
#include <fstream>
#include "output.h"
#include "signal.h"

#define PI 3.1415926

int main(){
    Signal s1 = Signal(1.0, 0.5, 0.0);
    output_signal_equation(s1);

    std::map<float, float> signal_data;
    float start_time = 0.0;
    float end_time = 4.0;
    float time_step = 0.1;  // Adjust time step for better resolution

    // Generate signal data for different time points
    for (float t = start_time; t <= end_time; t += time_step) {
        signal_data[t] = s1.evaluate(t);
    }

    // Export data to CSV file
    std::ofstream csv_file("signal_data.csv");
    if (csv_file.is_open()) {
        // Write headers to CSV
        csv_file << "Time,Amplitude\n";

        // Write signal data to CSV
        for (const auto& [time, amplitude] : signal_data) {
            csv_file << time << "," << amplitude << "\n";
        }

        csv_file.close();
        std::cout << "Signal data exported to signal_data.csv!" << std::endl;
    } else {
        std::cerr << "Failed to open CSV file!" << std::endl;
    }

    return 0;
}
