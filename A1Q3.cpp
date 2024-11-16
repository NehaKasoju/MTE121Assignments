/*
Prompt the user to enter the amount of money that they would like to withdraw from the bank (for example $1.17).
Note that $1 (dollar)= 100 ¢ (cents). The user only wants to withdraw coins (i.e. quarters (25 ¢), dimes (10 ¢), nickels
(5 ¢) and pennies (1 ¢)). Return the minimum number of total coins needed for the amount of money they would like
to withdraw. Note: Make sure that the amount of money that the user would like to withdraw from the bank is
stored as a double.
Write a Program that:
• Prompts the user for the amount of money that they would like to withdraw from the bank.
• Outputs to the screen the number of quarters, nickels, dimes and pennies. 
*/


#include <iostream>
using namespace std;

int main(){
  
  double userMoney = 0.0;
  cout <<"Enter the amount you want to withdraw " << endl;
  cin >> userMoney;
  
  int userCents = userMoney*100;
  
  int numQuart = userCents/25;
  int numDimes = (userCents%25)/10;
  int numNickels = ((userCents%25)%10)/5;
  int numPennies = (((userCents%25)%10)%5);
  
  cout << "You get: " << endl << numQuart << "Quarters" << endl << numDimes << "Dimes" << endl << numNickels << "Nickels" << endl << numPennies << "Pennies" << endl;
  
  return 0;
}

/*
Enter the amount you want to withdraw
1.17
You get:
4Quarters
1Dimes
1Nickels
2Pennies

--------------------------------
Process exited after 2.158 seconds with return value 0
Press any key to continue . . .
*/
