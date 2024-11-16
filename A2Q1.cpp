//A2Q1


#include <iostream>
using namespace std;

int main(){
  
  cout << "How much money do you have?" << endl;
  
  double userMoney = 0.0;
  cin >> userMoney;
  
  
  if (userMoney >= 1.75){
    userMoney -= 1.75;
    cout << "Coffee: Regular" << endl;
    
    if ((userMoney) >=1.25){
      cout << "Sweet: Cake" << endl;
    }
    
    if ((userMoney) >= 1){
      cout << "Sweet: Donut" << endl;
    }
    
  }
  
  else if (userMoney >= 1){
    userMoney -= 1;
    cout << "Coffee: Small" << endl;
    
    if((userMoney) > 0.60){
      cout << "Sweet: Tart" << endl;
    }
    
    if ((userMoney) > 0.50){
      cout << "Sweet: Chocolate" << endl;
    }
  }
  
  else if (userMoney >= 0.50){
    cout << "Sweet: Chocolate" << endl;
  }
  
  return 0;
}

/*
How much money do you have?
2.75
Coffee: Regular
Sweet: Donut

--------------------------------
Process exited after 2.63 seconds with return value 0
Press any key to continue . . .
*/