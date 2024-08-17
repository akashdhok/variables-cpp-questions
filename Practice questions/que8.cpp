// 8. Write a program to accept two floating point numbers from user. And perform multiplication and division on the numbers. Display the result on console.
#include <iostream>
using namespace std ; 
int main(){
    cout << "Enter first number here  : " <<"\n";
    float number1;
    cin >> number1;
    cout << "Enter second number here  : " <<"\n";
    float number2;
    cin >> number2;
    float number3 = number1 * number2;
    float number4 = number1 / number2;
    cout << "The multiplication of " << number1 << " and " << number2 << " is = " << number3 << "\n";
    cout << "The divison of " << number1 << " and " << number2 << " is = " << number4 << "\n";


}