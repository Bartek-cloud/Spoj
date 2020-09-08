#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int num){
    for(int i = 2 ; i * i <= num;i++){
        if(num%i == 0){
            return false;
        }
    }
    return num>1;
}

int main()
{
    vector<int>values,sum_pre;
    int a,b,v,n,q;
    cin>>n;
    values.resize(n);
    sum_pre.resize(n+1);
    for(int i = 0; i < n ; i++){
        cin>>values[i];
    }
    cin>>q;
    while(q--){
        cin>>a>>b>>v;
        sum_pre[a-1] += v;
        sum_pre[b] -= v;
    }
    for(int i = 1;i < n;i++){
        sum_pre[i]+=sum_pre[i-1];
    }
    for(int i = 0;i < n;i++){
        values[i] += sum_pre[i];
    }
    int quest;
    cin>>quest;
    int pos_q;
    while(quest--){
        cin>>pos_q;
        cout<< (is_prime(values[pos_q-1]) ? "tak" : "nie" )<<endl;
    }
    return 0;
}
