// Will Hancock
// CIS 1202 501
// December 8, 2024
// Program to calculate half of numeric values using templates and explicit specialization

#include <iostream>
#include <cmath> // For rounding integers
using namespace std;

// Templated function for floating-point types
template <typename T>
T half(T value) {
    return value / 2;
}

// Specialized function for integers
template <>
int half<int>(int value) {
    return static_cast<int>(round(static_cast<double>(value) / 2));
}

int main() {
    cout << "Testing the half function with different numeric types\n" << endl;

    int intTest = 9;
    cout << half(intTest) << endl;

    double doubleTest = 7.8;
    cout << half(doubleTest) << endl;

    float floatTest = 8;
    cout << half(floatTest) << endl;

    int anotherInt = 13;
    cout << half(anotherInt) << endl;

    return 0;
}
