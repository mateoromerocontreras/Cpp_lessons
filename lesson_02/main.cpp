#include <iostream>
#include <limits>

// Simple class that converts Celsius to Fahrenheit.
// Formula: F = C * 9/5 + 32
class TemperatureConverter {
public:
    TemperatureConverter() = default;

    // Convert a Celsius value to Fahrenheit (instance method)
    double toFahrenheit(double celsius) const {
        return celsius * 9.0 / 5.0 + 32.0;
    }

    // Static convenience function
    static double celsiusToFahrenheit(double celsius) {
        return celsius * 9.0 / 5.0 + 32.0;
    }
};

int main() {
    TemperatureConverter conv;

    // Demo values
    double samples[] = {0.0, 20.0, 37.0, -40.0};
    std::cout << "Celsius -> Fahrenheit examples:\n";
    for (double c : samples) {
        std::cout << "  " << c << " C  =  " << conv.toFahrenheit(c) << " F\n";
    }

    // Optional: let the user input a value to convert
    std::cout << "\nEnter a Celsius value to convert (or non-number to exit): ";
    double input;
    if (std::cin >> input) {
        double f = TemperatureConverter::celsiusToFahrenheit(input);
        std::cout << input << " C = " << f << " F\n";
    } else {
        std::cout << "No valid number entered. Exiting.\n";
    }

    return 0;
}
