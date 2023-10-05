//
// Created by emils on 05.10.2023.
//
#include <iostream>


int main () {
    using namespace std;
    int minutes, years, days;
    cout << "Enter the number of minutes: \n" << endl;
    cin >> minutes;
    years = minutes / 525600;
    days = minutes % 525600;
    days = days / 1440;
    printf("%d minutes is approximately %d years and %d days", minutes, years, days);
    return 0;
}