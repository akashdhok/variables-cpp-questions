// taking input from the user
#include <iostream>
using namespace std;
int main(){
    //  prompt the user to get the input
    cout << "enter the  number = " << "\n";
    int number1;
    // using cin to get the value of the input from the user
    cin >> number1;
    cout << "enter the number = " << "\n";
     int number2;
    cin >> number2;
    int num = number1 + number2;
    // cout << "num1 = " << number1<< "\n";
    // cout << "num2 = " << number2 << "\n";
    cout << "Sum of " << number1 << " and " << number2 << " is : " << num << "\n";

}