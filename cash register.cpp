#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string Name;
    bool Regular_customer;
    double Total_Cost_Of_Purchases, cash, balance, Discount, change;

    cout << "Please Enter your name: ";
    cin >> Name;

    cout << "Is " << Name << " a regular customer (1 for yes, 0 for no): ";
    cin >> Regular_customer;

    cout << "Enter total Cost of goods purchased: ";
    cin >> Total_Cost_Of_Purchases;

    if (Total_Cost_Of_Purchases >= 10000) {
        if (Regular_customer) {
            Discount = 0.05;
        } else {
            Discount = 0.02;
        }
    } else {
        Discount = 0.0;
    }

    cout << "Enter cash given: ";
    cin >> cash;

    double Discounted_Amount = Total_Cost_Of_Purchases * Discount;
    double Discounted_Total = Total_Cost_Of_Purchases - Discounted_Amount;
    change = cash - Discounted_Total;

    // Cash Receipt Format
    cout << "======================================" << endl;
    cout << "  Home Town Mini Shop Customer Receipt" << endl;
    cout << "======================================" << endl;
    cout << fixed << setprecision(2);
    cout << "Customer Name: " << Name << endl;
    cout << "Regular Customer: " << boolalpha << Regular_customer << endl;
    cout << "Total Cost of Goods Purchased: $" << Total_Cost_Of_Purchases << endl;
    cout << "Discount Applied: " << Discount * 100 << "%" << endl;
    cout << "Discounted Amount: $" << Discounted_Amount << endl;
    cout << "Discounted Total: $" << Discounted_Total << endl;
    cout << "Cash Given: $" << cash << endl;
    cout << "Change: $" << change << endl;
    cout << "Thank you for shopping with us Until next Time " << endl;
    cout << "======================================" << endl;

    return 0;
}
