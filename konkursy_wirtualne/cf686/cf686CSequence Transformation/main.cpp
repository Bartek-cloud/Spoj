

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int tests;


    cin >> tests;
    //pomysl odrazu
    //input ale zamist cyfr zobacz kolorowe prostokoty

    //drugi pomysl do B mozna lizczac liczby a po tem szukac pierwszej(najmnejszej liczby ktora wystopila 1 raz)
    int len;
    int* a, *b;
    while (tests--)
    {
        cin >> len;
        a = new int[len];
        b = new int[len +1];
        for (int i = 1; i <= len; i++) {

            b[i] = 0;
        }
        cin >> a[0];
        b[a[0]]++;
        int flag = 0;
        for (int i = 1; i < len; i++) {
            cin >> a[i];
            if (a[i] != a[0]) {
                flag = 1;
            }
        }
        if (flag){
            for (int i = 1; i < len; i++) {
                if (a[i] != a[i - 1]) {
                    b[a[i]]++;
                }
            }
            int minn = INT32_MAX;
            for (int i = 1; i <= len; i++) {
                if (b[i] != 0) {
                    if (i != a[0]|| i != a[len - 1]) { b[i]++; }//chyba przkombinowa³e mwarunki
                    if (i == a[0] || i == a[len - 1]) { b[i]--; }
                    minn = min(minn, b[i]);
                }
            }
            //cout << b[a[0]];

            cout << minn << endl;
        }else{ cout << 0 << endl; }

        delete[] a, b;
    }

}
