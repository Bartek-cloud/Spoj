#include <iostream>
#include <cstring>
//13 test bledna opdpwied ciekawe rezsta zakcpetowano
//dziwne ze oparte na plecaku ktory nie przeszedl
using namespace std;
int memo[101][201][201];
pair<int,int>items[100];
int A,B,N;
int solve(int item_id,int green,int yellow){
    if(item_id < 0||item_id >= N){
        return 0;
    }
    int new_green = green - items[item_id].first;
    int new_yellow = yellow - items[item_id].second;
    if(new_green < 0 || new_yellow < 0){
        return 0;//nie naprawimy tego
    }
    if(memo[item_id][green][yellow] > -1){
        return memo[item_id][green][yellow];
    }
    memo[item_id][green][yellow] = max(solve(item_id+1,new_green,new_yellow)+1,solve(item_id+1,green,yellow));
    //max z(ten przedmiot i solve nastepnego, brak przdmiotu i solve nastepnego)
    return memo[item_id][green][yellow];
}
int main()
{
    memset(memo,-1,sizeof memo);
    cin>>N>>A>>B;
    for(int i = 0;i <N ;i++){
        cin >> items[i].first >> items[i].second;
    }
    cout<<solve(0,A,B)<<endl;
    return 0;
}
