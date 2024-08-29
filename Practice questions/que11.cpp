//   11. Write a program that calculates the energy needed to
// heat water from an initial temperature to a final temperature. Your program should prompt the user to enter the amount of water in kilograms and the initial and final temperatures of the water.

//     >The formula to compute the energy is
//     >Q = M * (finalTemperature – initialTemperature) * 4184

//     >where M is the weight of water in kilograms temperatures are in degrees Celsius, and energy Q is measured in joules. 
    
//     Here is a sample run:
    
//     ![sample run](./resources/q6.jpg)
  
   #include<iostream>
using namespace std;
int main(){
    cout << "Enter amount of water here :" << "\n" ;
    int weight;
    cin >> weight;
    cout << "Enter initial temprature here :" << "\n" ;
    int initial_temprature;
    cin >> initial_temprature;
     cout << "Enter final temprature here :" << "\n" ;
    int final_temprature;
    cin >> final_temprature;
    int energy = weight * (final_temprature - initial_temprature) * 4184 ;
    cout << "the  energy needed to heat water from an inital temprature to final temprature is = " << energy << "\n";
}