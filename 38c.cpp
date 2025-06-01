#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int s, r;

    cout << "s = ";
    cin >> s;

    cout << "r = ";
    cin >> r;

    if (s <= 0 || r <= 0) {
        cout << "s and r must be positive";
        return 0;
    }

    /*
    s = 124
    r = 6
    a = s
    */
    const int n = 6; // number of sides
    int a = n * r * r * tan(M_PI / n); // area

    cout << endl << "a = " << a << endl;

    if (a == s)
        cout << "a = s";
    else
        cout << "a != s";

    return 0;
}
