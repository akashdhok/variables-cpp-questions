// 7. Write a program to accept two integer numbers from user. And perform addition and substraction. Display the reuslts of the operation on console.
#include <iostream>
using namespace std;
int main(){
    cout << "Enter first number here : " << "\n";
    int number1;
    cin >> number1;
    cout << "Enter second number here : " << "\n";
    int number2;
    cin >> number2;
    int number3 = number1 + number2;
    int number4 = number1 - number2;
    cout << number1 << " + " << number2 << " = " << number3 <<"\n";
    cout << number1 << " - " << number2 << " = " << number4 <<"\n";

}
