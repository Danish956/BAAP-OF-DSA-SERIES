//Take an integer between 65 and 90 as input and print its corresponding uppercase letter.
#include <iostream>
#include <cctype>
using namespace std;
int main(){
    int number;
    cout << "Enter the integer of a number between 65 to 90"<<endl;
    cin >>number;
    char CharNumber = char(number);
    cout << "The uppercase of a number is "<<CharNumber<<endl;
}