#include <iostream>
using namespace std;

int main() {
    string Firstname;
    string Secondname;
    int Marks;
    char Grade;

    cout << "Please enter your first name: ";
    cin >> Firstname;
    cout << "Please enter your second name: ";
    cin >> Secondname;

    cout << "Enter your mathematical test score: ";
    cin >> Marks;

    if (Marks >= 80) {
        Grade = 'A';
        cout << "Congratulations, " << Firstname << " " << Secondname
             << "! You have scored " << Marks << ", which is an A." << endl;
    } else {
        cout << "Sorry, " << Firstname << " " << Secondname
             << ", your score of " << Marks << " does not qualify for an A." << endl;
    }

    return 0;
}
