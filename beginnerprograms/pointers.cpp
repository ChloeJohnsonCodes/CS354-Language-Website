#include <iostream>

int main() {
    
    /* This program assigns addresses to pointers, dereferences pointers, and performs
     * pointer arithmetic.
     */
    
    int a = 2, b = 10, c = 22;
    int *pointer1, *pointer2, *pointer3;
    pointer1 = &a;
    pointer2 = &b;
    pointer3 = &c;
    a = *pointer1 * *pointer2 * *pointer3;
    b = *pointer1 + *pointer2 + *pointer3;
    c = *pointer1 - *pointer2 - *pointer2;
    pointer1++; // Changing the location of the pointer. a can no longer be referenced by pointer1
    pointer3 = pointer2; // pointer2 is assigned to pointer3. Now pointer3 references b.
    std::cout << "a location: " << &a << " pointer1 location: " << pointer1 << " pointer1: " << *pointer1 << std::endl;
    std::cout << "b location: " << &b << " pointer2 location: " << pointer2 << " pointer2: " << *pointer2 << std::endl;
    std::cout << "c location: " << &c << " pointer3 location: " << pointer3 << " pointer3: " << *pointer3 << std::endl;
    return 0;
}
