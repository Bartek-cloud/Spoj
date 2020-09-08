#include <bits/stdc++.h>
using namespace std;

int modulo = 100000000;
int dp[101][101][11][11];
int max_footman, max_horseman;

int solve(int horseman, int footman, int max_f, int max_h) {
    if (dp[horseman][footman][max_f][max_h] > -1) return dp[horseman][footman][max_f][max_h];
    int result = 0;
    if (horseman + footman == 0) return 1;
    else {
        if (footman > 0 && max_f > 0) result = (result + solve(horseman, footman - 1, max_f - 1, max_horseman)) % modulo;
        if (horseman > 0 && max_h > 0) result = (result + solve(horseman - 1, footman, max_footman, max_h - 1)) % modulo;
    }
    //cerr << footman << " " << horseman << " " << max_f << " " << max_h << " " << result << "\n";
    dp[horseman][footman][max_f][max_h] = result;
    return dp[horseman][footman][max_f][max_h];
}

int main() {
    int horseman, footman;
    memset(dp, -1, sizeof dp);
    cin >> footman >> horseman >> max_footman >> max_horseman;
    cout << solve(horseman, footman, max_footman, max_horseman) << endl;
}