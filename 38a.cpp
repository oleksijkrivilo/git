// 38a

#include <iostream>

using namespace std;

int main()
{
    float u, r, r1, r2, r3, i, i1, i2, i3;

    cout << "U = ";
    cin >> u;

    cout << "I1 = ";
    cin >> i1;

    cout << "I2 = ";
    cin >> i2;

    cout << "I3 = ";
    cin >> i3;

    cout << "R1 = ";
    cin >> r1;

    cout << "R2 = ";
    cin >> r2;

    cout << "R3 = ";
    cin >> r3;

    if (u > 0 && i1 > 0 && i2 > 0 && i3 > 0 && r1 > 0 && r2 > 0 && r3 > 0) {
        i = i1 + i2 + i3;
        r = r1 * r2 * r3 / (r1 + r2 + r3);

        cout << endl;
        cout << "U = U1 = U2 = U3 = " << u << " V" << endl;
        cout << "I = I1 + I2 + I3 = " << i << " A" << endl;
        cout << "R = R1 * R2 * R3 / (R1 + R2 + R3) = " << r << " O" << endl;
    } else {
        cout << endl << "Values must be positive";
    }

    return 0;
}
