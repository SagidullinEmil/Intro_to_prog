//
// Created by emils on 18.09.2023.
//
#include <cmath>
#include <iostream>

int main() {
    using namespace  std;
    double x = 0, y = 0, remain = 0;
    cout << "Input first number: "<<endl;
    cin >> x;
    cout << "Input second number: "<<endl;
    cin >> y;

    cout << x << "+" << y << '=' << x+y<<endl;
    cout << x << "-" << y << '=' << x-y<<endl;
    cout << x << "*" << y << '=' << x*y<<endl;
    cout << x << "/" << y << '=' << x/y<<endl;
    remain = fmod(x, y);
    cout << x << "%" << y << '=' << remain<<endl;
}