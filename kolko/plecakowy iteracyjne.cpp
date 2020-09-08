#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> V, S, memo;


int main()
{
    int s;
    cin >> s >> n;
    memo.assign(s + 1, 0);
    V.resize(n);
    S.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> V[i] >> S[i];
    }
    memo[0]=0;
    for(int i = 1;i <= s ; i++){
        memo[i]=0;
        for(int j = 0 ;j < n; j++){
            if(S[j] <= i){
                memo[i] = max(memo[i],V[j] + memo[i-S[j]]);
            }
        }
    }
    cout<<memo[s]<<endl;
    return 0;
}
