
#include <bits/stdc++.h>

using namespace std;
pair<int,int> hotels[1001];
const int range = 800;
int target;
int cur_cost=0;
int num_hot;
int solve(int cur_hot){

    if(cur_hot >= num_hot){
        return 0;
    }
    int i=cur_hot;
    if(hotels[cur_hot].first + range>=target){
        //cout<<"last "<<cur_hot<<endl;
        return hotels[cur_hot].second;
    }
    int minn=INT_MAX;
    //cout<<"hotels[i].first "<<hotels[i].first<<endl;
    //cout<<"hotels[cur_hot].first + range "<<hotels[cur_hot].first + range<<endl;
    i++;
    while(hotels[i].first<=hotels[cur_hot].first + range&&i < num_hot){
        //cout<<"hotels[i].second "<<hotels[i].second<<endl;
        minn=min(solve(i),minn);
        i++;
    }
    //cout<<"minn "<<minn<<endl;
    return minn+hotels[cur_hot].second;



}
int main()
{

    cin>>target>>num_hot;
    int j=0;
    hotels[0].first=0;
    hotels[0].second=0;
    for(int i=1;i<num_hot+1;i++){
        cin>>hotels[i].first>>hotels[i].second;
        j++;
    }
    cout<<solve(0)<<endl;
    cur_cost=0;
    return 0;
}

/*
2000 7
100 54
120 70
400 17
700 38
1000 25
1200 18
1440 40
*/

