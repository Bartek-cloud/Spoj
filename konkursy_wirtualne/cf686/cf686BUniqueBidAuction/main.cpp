#include <iostream>
#include <algorithm>
using namespace std;
bool flag = 0;
int index = -2;

int* a;
int* b;
int mini = INT32_MAX;

int len;

void solvei(int limit) {
    mini = INT32_MAX;
    index = -2;
    for (int i = 0; i < len; i++) {
        if (a[i] < mini && a[i]>limit) {
            mini = a[i];
            index = i;
        }
    }
    for (int i = 0; i < len; i++) {
        if (a[i] == mini && index != i) {
            solvei(mini);
            break;
        }
    }




}
int main()
{
    int tests;


    cin >> tests;


    while (tests--)
    {
        cin >> len;
        a = new int[len];
        b = new int[len + 1];
        mini = INT32_MAX;
        for (int i = 0; i < len; i++) {
            cin >> a[i];
            b[i] = a[i];
        }

        stable_sort(b, b + len);
        b[len] = 0;
        if (b[0] != b[1]){ mini = b[0]; }
        else
        {
            for (int i = 1; i < len ; i++) {
                if (b[i] != b[i + 1]) {
                    if(b[i] != b[i - 1]) {
                        mini = b[i];
                        break;
                    }
                }


            }
        }
        if (mini == INT32_MAX) {
            cout << -1 <<endl;
            continue;
        }
        for (int i = 0; i < len; i++) {
            if (a[i] == mini) {
                cout << i+1 <<endl;
                break;
            }
        }
        delete[] a, b;
    }

}
