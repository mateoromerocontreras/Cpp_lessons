#include <iostream>
#include <string>

// Simple class that swaps values of two variables.
class ValueSwapper {
public:
    ValueSwapper() = default;

    // Swap two integer values by reference
    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Template method to swap any type
    template<typename T>
    void swapValues(T& a, T& b) {
        T temp = a;
        a = b;
        b = temp;
    }

    // Static convenience function
    template<typename T>
    static void swapStatic(T& a, T& b) {
        T temp = a;
        a = b;
        b = temp;
    }
};

int main() {
    ValueSwapper swapper;

    // Demo with integers
    int x = 10, y = 20;
    std::cout << "Before swap: x = " << x << ", y = " << y << "\n";
    swapper.swap(x, y);
    std::cout << "After swap:  x = " << x << ", y = " << y << "\n\n";

    // Demo with doubles using template method
    double a = 3.14, b = 2.71;
    std::cout << "Before swap: a = " << a << ", b = " << b << "\n";
    swapper.swapValues(a, b);
    std::cout << "After swap:  a = " << a << ", b = " << b << "\n\n";

    // Demo with strings using static method
    std::string first = "Hello", second = "World";
    std::cout << "Before swap: first = \"" << first << "\", second = \"" << second << "\"\n";
    ValueSwapper::swapStatic(first, second);
    std::cout << "After swap:  first = \"" << first << "\", second = \"" << second << "\"\n\n";

    // Interactive: let user input two integers to swap
    std::cout << "Enter two integers to swap (e.g., 5 8): ";
    int num1, num2;
    if (std::cin >> num1 >> num2) {
        std::cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << "\n";
        swapper.swap(num1, num2);
        std::cout << "After swap:  num1 = " << num1 << ", num2 = " << num2 << "\n";
    } else {
        std::cout << "Invalid input. Exiting.\n";
    }

    return 0;
}
