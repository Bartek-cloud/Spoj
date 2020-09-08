#include <bits/stdc++.h>

using namespace std;
/*
Najd³u¿szy rosn¹cy podci¹g (Longest Increasing Subsequence (LIS))
-----------------------------------------------------------------

Dany jest ci¹g n liczb
1 <= n <= 1000
1 <= a_1 a_2 ... a_n <= 1000

Naszym zadaniem jest wybranie podci¹gu danego ci¹gu takiego, ¿e pomiêdzy ka¿dymi dwoma kolejnymi elementami spe³niona jest nierównoœæ:
a_i < a_(i+1)

Input:
6
50 3 10 7 40 80

Output:
4

3 10 40 80 albo 3 7 40 80
*/
vector<int> numbers, memo;
int n;
int solve(int element_index) {
    if(memo[element_index] > -1) {
        return memo[element_index];
    }
    memo[element_index] = 1;
    for(int i = element_index - 1 ;i >= 0; --i){
        if(numbers[i] < numbers[element_index]){
            memo[element_index] = max(memo[element_index], 1 + solve(i));
        }
    }
    return memo[element_index];
}

int main()
{
    cin>>n;
    numbers.resize(n);
    memo.assign(n,-1);
    for(int i=0;i<n;i++){
        cin>>elements[i];
    }
    for(int i=0;i<n;i++){
        cout<<solve(i)<<endl;
    }
    return 0;
}
