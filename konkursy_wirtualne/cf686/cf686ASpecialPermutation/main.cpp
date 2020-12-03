#include <iostream>
using namespace std;
int main()
{
    int tests;
    int a, midle;
    cin >> tests;
    while (tests--)
    {
        cin >> a;
        if (a % 2) { midle = a / 2 + 1; }
        else { midle = -10; }

        do {
            if (a == midle) { cout << a - 1 << " " << a<<" "; a--; }
            else { cout << a<<" "; }
        } while (--a>0);
        cout << endl;
    }
}
