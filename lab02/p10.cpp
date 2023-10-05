//
// Created by emils on 05.10.2023.
//
#include <iostream>
#include <cmath>


int main () {
    using namespace std;
    double population = 312032486.0;
    double growth = 31536000.0 / 7;
    double death = 31536000.0 / 13;
    double migration = 31536000.0 / 45;
    double years;
    cout << "Enter the number of years: \n" << endl;
    cin >> years;

    double change = growth + migration - death;
    double result = round(double (population + (change * years)));
    printf("The population in %.0f years is %.0f", years, result);

    return 0;
}