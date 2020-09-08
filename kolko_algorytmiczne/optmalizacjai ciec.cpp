#include <bits/stdc++.h>
using namespace std;

int n;
vector<int>prices,memo;

int solve(int n){
    if(memo[n]!=-1){
        return memo[n];
    }
    if(n==1){
        return memo[n]=prices[n-1];
    }
    //tutaj ustawiam cene dla niepocetego preta
    memo[n] = prices[n-1];
    //tutaj probujemy poprawic zysk dzielac na dwie czesci
    for(int i=0;i<n;i++){
        memo[n]=max(memo[n],solve(n-i)+solve(i));
    }
    return memo[n];
}
int main()
{
    cin>> n;
    prices.resize(n);
    memo.assign(n+1,-1);
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    solve(k);
    return 0;
}
/*
8
1 5 8 9 10 17 17 20

output
22
*/
