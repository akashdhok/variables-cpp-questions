// 12. If you know the balance and the annual percentage interest rate, you can compute the interest on the next monthly payment using the following formula:

//     >interest = balance x (annualInterestRate/1200)

//     Write a program that reads the balance and the annual percentage interest rate and displays the interest for the next month.
#include<iostream>
using namespace std;
int main(){
    double balance = 5000;
    double annualIntrestRate = 11;
    double interest = balance * (annualIntrestRate / 1200);
    cout << "Interest = " << interest << "\n";
}