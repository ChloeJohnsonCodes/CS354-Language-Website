// Created by Chinwendum Njoku on 3/27/21.

#include <iostream>

//This is a simple fibonacci sequence program that uses recursive function.

using namespace std;

int fibonacci(int n, int firstTerm, int secondTerm);

int main(){
    cout << fibonacci(100, 0, 1);
}

int fibonacci(int n, int firstTerm, int secondTerm){
    cout << firstTerm << " ";
    if (n == 0){
        return firstTerm + secondTerm;
    }
    else{
        return fibonacci(n-1, secondTerm, firstTerm + secondTerm);

    }
}
