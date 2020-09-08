//#include <bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

vector<int> a, changes;


int main()
{
    int n, q;
    cin >> n >> q;
    a.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    changes.assign(n + 1, 0);
    while (q--) {
        int l, r, v;
        cin >> l >> r >> v;
        changes[l - 1] += v;
        changes[r] -= v;
    }
    for (int i = 1; i < (int)changes.size(); ++i) {
        changes[i] += changes[i - 1];
    }
    for (int i = 0; i < n; ++i) {
        a[i] += changes[i];
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}