//
// Created by emils on 02.10.2023.
//
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    const double pi = 3.14159339;
    double r = 0, area = 0, volume = 0;
    int len = 0;
    cout<<"Enter the radius and length of a cylinder: "<<endl;
    cin>>r; cin>>len;
    area = (r*r)*pi;
    volume = area*len;
    cout<<"The area is "<<fixed<<setprecision(4)<<area<<endl;
    cout<<"The volume is "<<fixed<<setprecision(1)<<volume<<endl;
    return 0;
}