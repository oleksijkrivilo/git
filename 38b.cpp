#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    if (a <= 0 || b <= 0) {
        cout << endl << "a and b must be positive";
        return 0;
    }

    float d = pow(a, 2) - 4 * b;

    cout << endl;

    if (d > 0) {
        // a = 15; b = 5
        float x1 = (-a + sqrt(d)) / 2;
        float x2 = (-a - sqrt(d)) / 2;

        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2;
    } else if (d == 0) {
        // a = 6; b = 9
        float x = -a / 2;

        cout << "x = " << x;
    } else {
        // a = 5; b = 25
        cout << "Has no real roots";
    }

    return 0;
}
