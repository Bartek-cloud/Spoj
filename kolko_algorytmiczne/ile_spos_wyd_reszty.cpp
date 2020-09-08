#include <bits/stdc++.h>
//cerr<<"cur"<<available[current]<<"sum"<<sum<<endl;
using namespace std;

int available[100];
int memo[10001][101];
int n,k;
int solve(int rest,int current){
    if(current<0||current>=n){
        return 0;
    }
    if(memo[rest][current]!=-1){
        return memo[rest][current];
    }
    if(rest < 0){
        return memo[rest][current]=0;
    }
    if(rest == 0){
        return memo[rest][current]=1;
    }
    memo[rest][current]=solve(rest-current,current)+solve(rest,current+1);
    return memo[rest][current];
}
int main()
{
    memset(memo,-1,sizeof memo);
    cin>>k>>n;
    for(int i=0;i<n;i++){
        cin>>available[i];
    }

    cout<<solve(n-1,k)<<endl;
    return 0;
}
//cerr<<"suc"<<succes<<endl;
/*
5
3
1 2 5
*/

//cerr<<"suc"<<succes<<endl;
/*
5
3
1 2 5
*/

