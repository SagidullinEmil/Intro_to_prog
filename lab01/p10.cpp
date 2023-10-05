//
// Created by emils on 18.09.2023.
//
#include <iostream>
#include <cmath>


int main () {
    using namespace std;
    double population = 312032486.0;
    double growth = 31536000.0 / 7;
    double death = 31536000.0 / 13;
    double migration = 31536000.0 / 45;

    double year = growth + migration - death;
    double result1 = round(double (population + year));
    double result2 = round(double (population + year * 2));
    double result3 = round(double (population + year * 3));
    double result4 = round(double (population + year * 4));
    double result5 = round(double (population + year * 5));


    cout << (int)result1 <<endl;
    cout << (int)result2 <<endl;
    cout << (int)result3 <<endl;
    cout << (int)result4 <<endl;
    cout << (int)result5 <<endl;
    return 0;
}