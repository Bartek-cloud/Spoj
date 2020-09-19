#include <bits/stdc++.h>
using namespace std;

int n;
vector< pair<int,int>>memo;
vector<int>prices;
pair<int,int> solve(int n,int cut){
    if(memo[n].first!=-1){
        return memo[n];
    }
    if(n==1){
        memo[n].first=prices[n-1];
        memo[n].second=1;
        return memo[n];
    }
    //tutaj ustawiam cene dla niepocetego preta
    memo[n].first = prices[n-1];
    memo[n].second = cut;
    //tutaj probujemy poprawic zysk dzielac na dwie czesci
    for(int i=0;i<n;i++){
        int a,b;
        pair<int,int>ab=solve(n-i,1);
        pair<int,int>cd=solve(i,1);
        pair<int,int>ef=make_pair(ab.first+cd.first,ab.second+cd.second);
        if(ef.first>memo[n].first){
            memo[n].first=ef.first;
            memo[n].second=ef.second;
        }
        if(ef.first==memo[n].first && ef.second<memo[n].second){
            memo[n].first=ef.first;
            memo[n].second=ef.second;
        }
    }
    return memo[n];
}
int main()
{
    int tests;
    cin>>tests;
    while(tests--){
        cin>> n;
        prices.resize(n);
        memo.resize(n+1);
        //memo.assign(n+1,-1);
        for(int i=1;i<=n;i++){
            memo[i].first=-1;
        }
        for(int i=0;i<n;i++){
            cin>>prices[i];
        }
        pair<int,int>anws=solve(n,1);
        cout<<anws.first<<" "<<anws.second<<endl;
    }
}
