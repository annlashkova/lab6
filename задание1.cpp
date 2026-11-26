#include <iostream>

using namespace std;

int membershipCost(int visits, int price, int discountPercent) {
    if (visits < 0 || price < 0 || discountPercent < 0 || discountPercent > 100) {
        cout << "Input error" << endl;
        return 1;
    }
    return visits * price * (100 - discountPercent) / 100;
}

int main() {
    int visits, price, discountPercent;

    cout << "Enter visits, price, discount: ";
    cin >> visits >> price >> discountPercent;

    cout << "Result: " << membershipCost(visits, price, discountPercent) << endl;

    return 0;
}