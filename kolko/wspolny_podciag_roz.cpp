#include <bits/stdc++.h>
#define ARRAY_SIZE 8000
using namespace std;
string a,b;
int memo[ARRAY_SIZE][ARRAY_SIZE];
int solve(int a_position,int b_position){
    if(a_position>=a.length() || b_position>=b.length()){
        return 0;
    }
    if(memo[a_position][b_position] > -1){
        return memo[a_position][b_position];
    }
    if(a[a_position] == b[b_position]){
        memo[a_position][b_position] = 1 + solve(a_position+1,b_position+1);
        return memo[a_position][b_position];
    }
    memo[a_position][b_position]= max(solve(a_position,b_position+1),solve(a_position+1,b_position));
    return memo[a_position][b_position];
}
int main()
{
    memset(memo,-1,sizeof memo);
    cin>>a>>b;
    cout<<solve(0,0)<<endl;
    return 0;
}
