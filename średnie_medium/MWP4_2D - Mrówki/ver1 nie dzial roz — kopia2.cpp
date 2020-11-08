#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
    int tests,number_hole,num_ants_go_right,j=0,num_ants_go_left;
    int holes[1001] ,holes_res[1000],holes_last_use_time[1000];
    vector <int>ants_go_right,ants_go_left;
    cin>>tests;

    while(tests--){
        memset(holes_res,0,sizeof holes_res);
        memset(holes_last_use_time,0,sizeof holes_last_use_time);
        for(int i=0; i<number_hole;i++){
            cout<<holes_res[i]<<" "<<holes_last_use_time[i]<<endl;
        }
    return 0;
    }
}
/*
1
2
1 8
3
2 3 5
3
4 6 7

out
3 6
3 6
*/