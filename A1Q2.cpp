/*
Q2
The conversion for a temperature given in Fahrenheit to Celsius
Write a program that:
• Prompts the user for a temperature in Fahrenheit
• Outputs to the screen the temperature in Celsius
*/

#include <iostream>
using namespace std;

int main(){
double tempF = 0.0;
double tempC = 0.0;

cout << "Enter a temperature in Fahrenheit";

cin >> tempF;

tempC = (5.0/9.0) * (tempF - 32);

cout << "Temp in Celsius is " << tempC << endl;

return 0;
}

/*
Enter a temperature in Fahrenheit212
Temp in Celsius is 100

--------------------------------
Process exited after 1.85 seconds with return value 0
Press any key to continue . . .
*/
