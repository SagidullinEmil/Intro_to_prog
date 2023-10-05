//
// Created by emils on 02.10.2023.
//
#include <iostream>

int main () {
    using namespace std;
    int a;
    int b;
    cout << "Enter the first value: ";
    cin >> a;
    cout << "Enter the second value: ";
    cin >> b;
    printf("Before swapping: a = %d; b = %d;\n", a, b);
    int a1 = b, a2 = a;
    printf("Before swapping: a = %d; b = %d;\n", a1, a2);
    return 0;
}
