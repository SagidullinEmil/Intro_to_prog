//
// Created by emils on 05.10.2023.
//
#include <iostream>


int main () {
    using namespace std;
    double pound, kilo;
    cout << "Enter a number in pounds: \n" << endl;
    cin >> pound;
    kilo = pound *  0.454;
    printf("%.1f pounds is %.3f kilograms", pound, kilo);
    return 0;
}