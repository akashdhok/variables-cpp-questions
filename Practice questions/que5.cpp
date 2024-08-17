// 5. Write a program to accept two numbers `numerator` and `denominator` of type `int` from user. Perform modulo-division and store the result in `remainder` variable. Print the value of `remainder` on the console.
#include<iostream>
using namespace std;
int main(){
    cout << "Enter numerator here = " << "\n";
    int numerator;
    cin >> numerator;
     cout << "Enter denominator here = " << "\n";
    int denominator;
    cin >> denominator;
    int result = numerator % denominator;
    cout << "Hence the reminder is = " << result << "\n";
}