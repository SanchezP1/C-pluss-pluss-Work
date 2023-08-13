#include <iostream>
using namespace std;

double calculateElectricityBill(int units) {
    double totalBill = 0.0;

    if (units > 0) {
        if (units <= 100) {
            totalBill = units * 5;
        } else if (units <= 200) {
            totalBill = 100 * 5 + (units - 100) * 7;
        } else if (units <= 300) {
            totalBill = 100 * 5 + 100 * 7 + (units - 200) * 10;
        } else if (units <= 400) {
            totalBill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 15;
        } else {
            totalBill = 100 * 5 + 100 * 7 + 100 * 10 + 100 * 15 + (units - 400) * 20;
        }
    }

    return totalBill;
}