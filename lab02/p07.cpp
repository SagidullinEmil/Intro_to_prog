//
// Created by emils on 05.10.2023.
//
#include <iostream>


int main () {
    using namespace std;
    double feet, meter;
    cout << "Enter a value for feet: \n" << endl;
    cin >> feet;
    meter = feet * 0.305;
    printf("%.1f feet is %.4f meters", feet, meter);
    return 0;
}