//
// Created by emils on 02.10.2023.
//
#include <iostream>


int main () {
    using namespace std;
    int a;
    int b;
    cout << "Enter the first value: \n";
    cin >> a;
    cout << "Enter the second value: \n";
    cin >> b;
    printf("Before swapping: a = %d; b = %d;\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Before swapping: a = %d; b = %d;\n", a, b);
    return 0;
}