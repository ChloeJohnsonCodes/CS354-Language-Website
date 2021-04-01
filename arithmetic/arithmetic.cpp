#include <iostream>

bool isPrime(int number) {
    for(int i = 2; i < number; i++) {
        if ((number%i) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int x;
    std::cout << "Enter a number to check if it's prime: ";
    std::cin >> x;
    if(isPrime(x)) {
        std::cout << x << " is a prime number." << std::endl;
    }
    else {
        std::cout << x << " is not a prime number." << std::endl;
    }
    return 0;
}
