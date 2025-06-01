#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y;

    cout << "x = ";

    if (!(cin >> x)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        x = 1;
        cout << "Wrong value: x was reset to 1" << endl;
    }

    cout << "y = ";

    if (!(cin >> y)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        y = 1;
        cout << "Wrong value: y was reset to 1" << endl;
    }

    float a = 3.8 * y + x;

    if (a > 0) {
        float m = (exp(y) + sin(x)) / log(a);

        cout << endl << "M = " << m;
    } else {
        cout << endl << "The argument of the logarithm must be positive";
    }

    return 0;
}
