//
// Created by emils on 18.09.2023.
//
#include <iostream>
#include <cmath>
#include <iomanip>


int main() {
    using namespace std;
    cout << left << setw(7) <<  "p" << right << setw(4) << "p*5" <<right << setw(9) << "p*10"<<endl;
    double p1 = 5, p2 = 25, p3 = 50;
    cout << left << setw(7) <<  p1 << right << setw(4) << p2 <<right << setw(9) << p3 <<endl;
    p1 = p1 * 2;
    p2 = p2 * 2;
    p3 = p3 * 2;
    cout << left << setw(7) <<  p1 << right << setw(4) << p2 <<right << setw(9) << p3 <<endl;
    p1 = p1 * 2.5;
    p2 = p2 * 2.5;
    p3 = p3 * 2.5;
    cout << left << setw(7) <<  p1 << right << setw(4) << p2 <<right << setw(9) << p3 <<endl;
    p1 = p1 * 2;
    p2 = p2 * 2;
    p3 = p3 * 2;
    cout << left << setw(7) <<  p1 << right << setw(4) << p2 <<right << setw(9) << p3 <<endl;
    return  0;

}


