//
// Created by emils on 18.09.2023.
//
#include <iostream>

int main(){
    using namespace std;
    char name[50];
    char lastname[50];
    cout << "What is your name? "<<endl;
    cin >> name >> lastname;
    cout << "Hello, " << name << " " << lastname << "!" <<endl;
    return  0;

}