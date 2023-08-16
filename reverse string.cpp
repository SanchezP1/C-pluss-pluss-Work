// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
 using namespace std;
// class to have the strings initial position//
   string reverse_string(string str){
    string temp_str = str;
    int index_pos = 0;
     // for loop to reverse the positions of the letters//
 for(int x =  temp_str.length() -1; x >= 0; x--)
   {
        str[index_pos] = temp_str[x];
        index_pos++;
    }
    return str;
   }
int main()
{
//Output://
cout << "Original string : Hello world";
cout << "\n Reverse string" << reverse_string("\n Hello world");
cout << "\n\nOriginal string: Reversal string";
cout << "\n Reverse string " << reverse_string("\nReverse string");
return 0;

}
