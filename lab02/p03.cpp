//
// Created by emils on 02.10.2023.
//
#include <iostream>


int main () {
    using namespace std;
    string full_num;
    int ch1, ch2, ch3, ch4;
    cout << "Enter a four-digit integer: \n" << endl;
    cin >> full_num;

    ch1 = stoi(string(1,full_num[0]));
    ch2 = stoi(string(1,full_num[1]));
    ch3 = stoi(string(1,full_num[2]));
    ch4 = stoi(string(1,full_num[3]));
    cout << "The sum of all digits is " << ch1 + ch2 + ch3 + ch4;
    return 0;
}