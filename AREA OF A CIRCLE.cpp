#include <iostream>
using namespace std;

   //AREA OF A CIRCLE //
   int main(){
     int Diameter;
     float Radius;
     double Area ;
    const int pi = 3.142;
      cout << "Please enter the Diameter of the circle : ";
      cin >> Diameter 
    // First Enter the diameter of the Circle //
    Raduis = Diameter / 2 ;  // Formula to get radius //
    Area = pi * Radius * Radius; // Formula for Area of the circle//
     if ( Diameter <= 0 ) // In order not to have negative or null Diameters//
        cout << "Please enter a positive Diameter.";
     else 
        cout << " The Area of the cirlce : "  << Area;
           return 0;
   }