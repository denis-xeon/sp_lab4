// main.cpp
#include <iostream>
#include "calculator.h"

int main() {
    // створення об'єкта класу Calculator
    Calculator myCalculator;

    // використання функцій класу
    int sum = myCalculator.add(5, 3);
    int product = myCalculator.multiply(4, 7);

    // вивід результатів
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << product << std::endl;

    return 0;
}
