//
// Created by emils on 02.10.2023.
//
#include <iostream>


int main () {
    using namespace std;
    double  F;
    cout << "Enter the temperature in degrees Fahrenheit: \n";
    cin >> F;
    double c = (5.0 / 9.0) * (F - 32.0);
    printf("The temperature in degrees Celsius is %.2f", c);
    return 0;
}