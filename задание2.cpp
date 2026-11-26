#include <iostream>
using namespace std;

bool useVisit(int& remaining, int count) {
    if (count > 0 && remaining >= count) {
        remaining -= count;
        return true;
    }
    return false;
}

int main() {
    int remaining, count;

    cout << "Enter remaining visits and count: ";
    cin >> remaining >> count;

    if (useVisit(remaining, count)) {
        cout << "Success. Remaining = " << remaining << endl;
    }
    else {
        cout << "Failed. Remaining = " << remaining << endl;
    }

    return 0;
}