//
// Created by emils on 18.09.2023.
//
#include <cmath>
#include <iostream>


int main() {
    using namespace std;
    double z = 1.0 + (1.0 / 4) + (1.0 / 9) + (1.0 / 16) + (1.0 / 25);
    double x = 6.0 * z;
    double x1 = sqrt(x);
    double y = 6.0 * (z + (1.0 / 36.0));
    double y1 = sqrt(y);


    cout << x1 <<endl;
    cout << y1 <<endl;
    return  0;
}