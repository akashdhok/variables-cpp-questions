// 1. Write a program to accept two integer `number1` and `number2` form user. Calculate and print the `sum` of two entered number.
#include <iostream>
using namespace std;
int main(){
    int number1;
    int number2;
    cout<<"Enter number1 here : " << "\n";
    cin >>number1 ;
    cout<<"Enter number2 here : " << "\n";
    cin >>number2 ;
    int number3 = number1 + number2;
    cout << "the sum of number1 and number2 = " << number3;

}
