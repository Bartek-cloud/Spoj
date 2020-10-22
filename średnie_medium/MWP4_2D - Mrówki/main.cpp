#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
    int tests ,number_hole ,num_ants_go_right ,j=0 ,num_ants_go_left;
    int holes[1001] ,holes_res[1000] ,holes_last_use_time[1000];
    vector <int>ants_go_right,ants_go_left;
    cin >> tests;

    while(tests--){
        cin >> number_hole;
        memset(holes_res,0,sizeof holes_res);
        memset(holes_last_use_time ,0 ,sizeof holes_last_use_time);
        for(int i = 0 ; i < number_hole ; i++){
            cin >> holes[i];
        }
        holes[number_hole] = 2000000001;
        cin >> num_ants_go_right;
        ants_go_right.resize(num_ants_go_right);
        j=1;
        for(int i = 0 ; i < num_ants_go_right ; i++){
            cin >> ants_go_right[i];
            while(ants_go_right[i] > holes[j]){
                j++;
            }
            holes_res[j]++;
            holes_last_use_time[j] = max(holes_last_use_time[j], holes[j] - ants_go_right[i]);
        }
        cin >> num_ants_go_left;
        ants_go_left.resize(num_ants_go_left);
        j = 0;
        for(int i = 0 ; i < num_ants_go_left ; i++){
            cin >> ants_go_left[i];
            while(ants_go_left[i] >= holes[j + 1]){
                j++;
            }
            holes_res[j]++;
            holes_last_use_time[j] = max(holes_last_use_time[j], ants_go_left[i] - holes[j]);
        }
        for(int i = 0; i < number_hole; i++){
            cout << holes_res[i] << " " << holes_last_use_time[i] << endl;
        }
    }
    return 0;
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
