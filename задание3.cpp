#include <iostream>
using namespace std;

int bonus(int visits, int baseBonus) {
    if (visits < 0 || baseBonus < 0) {
        cout << "Input error" << endl;
        return -1;
    }
    return visits * baseBonus;
}

int bonus(int visits, int baseBonus, bool weekend) {
    if (visits < 0 || baseBonus < 0) {
        cout << "Input error" << endl;
        return -1;
    }
    int result = visits * baseBonus;
    if (weekend) {
        result += 10;
    }
    return result;
}

int main() {
    int visits, baseBonus, weekend;

    cout << "Enter visits, base bonus, weekend (0/1): ";
    cin >> visits >> baseBonus >> weekend;

    cout << "Bonus (2 args): " << bonus(visits, baseBonus) << endl;
    cout << "Bonus (3 args): " << bonus(visits, baseBonus, weekend == 1) << endl;

    return 0;
}
