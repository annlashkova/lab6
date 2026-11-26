#include <iostream>
using namespace std;

int subscriptionFee(int months, int perMonth = 45, int setup = 10) {
    if (months < 0 || perMonth < 0 || setup < 0) {
        cout << "Invalid values" << endl;
        return -1;
    }
    if (months >= 6) {
        setup = 0;
    }
    return months * perMonth + setup;
}

int main() {
    int months;

    cout << "Enter months: ";
    cin >> months;

    cout << "Fee: " << subscriptionFee(months) << endl;

    return 0;
}