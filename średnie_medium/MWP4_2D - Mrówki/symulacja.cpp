#include <iostream>
#include <vector>
using namespace std;
vector<int> holes, holes_res, ants_pos, ants_status ,ants_go_left,holes_last_use_time;
int number_hole, num_ants_go_right , num_ants_go_left, ants_sum,surv_ants;
int turns;
bool r_crash(int ant){
    for(int i = 0 ; i < ants_sum; i++){
        if(ants_status[i]==0 && (ants_pos[i] + 1) == ants_pos[i]){
            ants_status[ant]=3;
            ants_status[i]=2;
            return 1;
        }
    }
    return 0;
}
bool in_hole_r(int ant){
     for(int i = 0 ; i < number_hole ; i++){
        if(ants_pos[ant] + 1 == holes[i]){
            ants_status[ant] = 1;
            holes_res[i]++;
            surv_ants--;
            holes_last_use_time[i]=turns;
            return 1;
        }
     }
    return 0;
}
void movent_r(int ant){
    if(in_hole_r(ant)){
        return;
    }
    if(r_crash(ant)){
        return;
    }
    ants_pos[ant]++;
};
bool in_hole_l(int ant){
     for(int i = 0 ; i < number_hole ; i++){
        if(ants_pos[ant] - 1 == holes[i]){
            ants_status[ant] = 1;
            holes_res[i]++;
            surv_ants--;
            holes_last_use_time[i]=turns;
            return 1;
        }
    }
    return 0;
}
void movent_l(int ant){
    if(in_hole_l(ant)){
       return;
    }
    ants_pos[ant]--;
};
void solve(){//0 left, 1 in hole, 2 right ,3 left but no now
    while(surv_ants){
        turns++;
        for(int i = 0; i < ants_sum ; i++){
            if(ants_status[i]== 3){
                ants_status[i] = 0;
            }
            if(ants_status[i] == 2){
                movent_r(i);
            }
            continue;
        }
        for(int i = 0; i < ants_sum ; i++){
            if(ants_status[i] == 0 ){
                movent_l(i);
            }
            continue;
        }
    }
}
int main()
{
    int tests;
    cin>>tests;
    while(tests--){
        turns=0;
        cin>>number_hole;
        holes.resize(number_hole);
        holes_res.assign(number_hole,0);
        holes_last_use_time.assign(number_hole ,0);
        for(int i = 0 ; i < number_hole ; i++){
            cin>>holes[i];
        }
        cin>>num_ants_go_right;
        ants_status.resize(num_ants_go_right);
        ants_pos.resize(num_ants_go_right);
        for(int i = 0 ; i < num_ants_go_right ; i++){
            cin>>ants_pos[i];
            ants_status[i] = 2;
        }
        cin>>num_ants_go_left;
        ants_sum = num_ants_go_left + num_ants_go_right;
        ants_pos.resize(ants_sum);
        ants_status.resize(ants_sum);
        surv_ants = ants_sum;
        for(int i = num_ants_go_right ; i < ants_sum ; i++){
            cin>>ants_pos[i];
            ants_status[i] = 0;
        }
        solve();
        //cerr<<turns<<endl;
        for(int i = 0; i < number_hole ; i++){
            cout<<holes_res[i]<<" "<<holes_last_use_time[i]<<endl;
        }
    }
    return 0;
}
