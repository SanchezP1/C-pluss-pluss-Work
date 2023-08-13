#include <iostream>
using namespace std ;

   int main () {
      int Units;
       cout << "Enter the number if units consumed in a month";
       cin >> units;

       int cost = 0;
       
       if (units > 0 && units <= 100){
        cost = units * 5;}
        else if (units > 101 && units <=200){
        cost = units * 7}
        else if (units > 201 && units <= 300 ){
            cost = units *10}
        else if ( units > 301 && units <=400){
            cost = units * 15}
        else if ( units > 400 ){
            cost units * 20}
         else {
            cout << "Invalid input . the number of units consumed must be greater than 0 " << endl;
            return 1;
         }
         cout << "Electricity bill for " << units << "units $ "<< cost << endl;
         }