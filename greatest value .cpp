#include <iostream>
using namespace std;

int main() {
    int X;
    int Y;
    int Z;
    int GreatestNumber;

    cout << "Enter X: ";
    cin >> X;
    cout << "Enter Y: ";
    cin >> Y;
    cout << "Enter Z: ";
    cin >> Z;

    if (X > Y && X > Z) {
        GreatestNumber = X;
    } else if (Y > X && Y > Z) {
        GreatestNumber = Y;
    } else {
        GreatestNumber = Z;
    }

    cout << "The greatest number among " << X << ", " << Y << ", and " << Z << " is: " << GreatestNumber << endl;

    return 0;
}
