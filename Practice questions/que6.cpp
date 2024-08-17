// 6. Write a program to solve the given expression ```result = number1 + number2 - number3 * number4 / number5```. Accept `number1`, `number2`, `number3`, `number4` and `number5` of type `int` form user. Print the result on the console in the below format.
// ```
//     Sample Input
//     number1 = 10
//     number2 = 20
//     number3 = 5
//     number4 = 10
//     number5 = 2

//     Ouptut format
//     10 + 20 - 5 * 10 / 2 = 5
// ```
#include <iostream>
using namespace std;
int main(){
    cout <<"Enter number1 here : " << "\n";
    int number1;
    cin >> number1;
    cout <<"Enter number2 here : " << "\n";
    int number2;
    cin >> number2;
    cout <<"Enter number3 here : " << "\n";
    int number3;
    cin >> number3;
    cout <<"Enter number4 here : " << "\n";
    int number4;
    cin >> number4;
    cout <<"Enter number5 here : " << "\n";
    int number5;
    cin >> number5;
    int result = number1 + number2 - number3 * number4 / number5;
    cout << number1 << "+" << number2 << "-" << number3 << "*" << number4 << "/" << number5 << "=" << result << "\n";
}