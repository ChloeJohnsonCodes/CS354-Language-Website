//
// Created by Chloe Johnson on 3/30/21.
//
#include<iostream>
#include<cmath>
#include<string>

// This is a variable for storing strings.
std::string retStrings[3];

// The quadratic method uses the quadratic formula to calculate the roots of
// a second-order polynomial equation.
void quadratic(int a, int b, int c) {

    // The discriminant is the part underneath the square root.
    double discriminant = pow(b, 2) - (4 * a * c);

    // If the discriminant is greater than 0, two roots will be returned.
    if (discriminant > 0) {
        retStrings[0] = std::to_string((-b + sqrt(discriminant))/double(2 * a));
        retStrings[1] = std::to_string((-b - sqrt(discriminant))/double(2 * a));
    }

    // If the discriminant is 0, one root will be returned.
    else if (discriminant == 0) {
        retStrings[0] = std::to_string(-b/double(2 * a));
    }

    // If the discriminant is less than 0, two complex roots will be returned.
    else {
        std::string firstArg = std::to_string(-b/double(2 * a));
        std::string secondArg = std::to_string(sqrt(-discriminant)/double(2 * a));
        retStrings[0] = firstArg + " + " + secondArg + "i";
        retStrings[1] = firstArg + " - " + secondArg + "i";
    }
}

int main() {
    int a, b, c, i = 0;
    std::cout << "Enter numbers a, b, and c into the quadratic formula." << std::endl;
    std::cout << "a:";
    std::cin >> a;
    std::cout << "b:";
    std::cin >> b;
    std::cout << "c:";
    std::cin >> c;
    quadratic(a, b, c);
    while (!retStrings[i].empty()) {
        std::cout << "Root " << (i+1)  << ": " << retStrings[i] << std::endl;
        i++;
    }
    return 0;
}