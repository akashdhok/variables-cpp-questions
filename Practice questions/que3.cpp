// 3. Write a program to accept three integer `number1`, `number2` and `number3` from user. Perform addition of `number1` and `number2` and store the result in `sum` variable. Perform subtraction of `number3` and `sum` and store the result in `subtraction` variable. Print the values of `sum` and `subtraction` on console.
#include <iostream>
using namespace std;
int main(){
    cout << "Enter first number = " << "\n";
    int number1;
    cin >> number1;
    cout << "Enter second number = " << "\n";
     int number2;
    cin >> number2;
    cout << "Enter third number = " << "\n";
     int number3;
    cin >> number3;
    int number4 = number1 + number2;
    cout << "Sum = " << number4 << "\n";
    int number5 = number4 - number3;
     cout << "Substraction = " << number5 << "\n";
  

}