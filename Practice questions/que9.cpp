// 9. Write a program to accept radius of circle from user. And calculate area and perimeter of circle. Display the result on console. Hint value of PI = 3.14
#include<iostream>
using namespace std;
int main(){
    cout << "Enter radius here :" << "\n" ;
    float radius;
    cin >> radius;
    float area = 2 * 3.14 * radius * radius;
    float perimeter = 2*3.14*radius;
    cout << "the area of circle is = " << area << "\n";
    cout << "the perimeter of circle is = " << perimeter << "\n";
}
