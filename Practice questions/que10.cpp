// 10. Write a program to accept length and breadth of rectangle from user. And calculate area and perimeter of rectangle. Display the result on console.
#include<iostream>
using namespace std;
int main(){
    cout << "Enter length here :" << "\n" ;
    int length;
    cin >> length;
    cout << "Enter breath here :" << "\n" ;
    int breath;
    cin >> breath;
    int area = length * breath ;
    int perimeter = 2 * (length + breath );
    cout << "the area of rectangle is = " << area << "\n";
    cout << "the perimeter of rectangle is = " << perimeter << "\n";
}