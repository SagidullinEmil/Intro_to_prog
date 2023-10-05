//
// Created by emils on 02.10.2023.
//
#include <iostream>

int main() {
    using namespace std;
    const double cm = 2.41;
    double inch;
    cout << "Enter the length in inches: \n";
    cin >> inch;
    double total = inch * cm;
    cout << inch << " in. = " << total << " cm.";
    return 0;
}
