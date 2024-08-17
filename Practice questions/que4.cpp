// 4. Write a program to accept two numbers `numerator` and `denominator` of type `float` from user. Perform division and store the result in `quotient` variable. Print the value of `quotient` on the console.
#include<iostream>
using namespace std;
int main(){
    cout << "Enter numerator here = " << "\n";
    float numerator;
    cin >> numerator;
     cout << "Enter denominator here = " << "\n";
    float denominator;
    cin >> denominator;
    float result = numerator / denominator;
    cout << "Hence the total result is = " << result << "\n";
}
