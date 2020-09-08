#include <iostream>

using namespace std;
void solve(int points[6]){
    int mian1,mian2;
    mian1 = (points[2]-points[0])*(points[5]-points[1]);
    mian2 = (points[4]-points[0])*(points[3]-points[1]);
    //cerr<<endl<<mian1<<" "<<mian2<<endl;
    if(mian1==mian2){
        cout<<"TAK"<<endl;
    }
    else cout<<"NIE"<<endl;

}
int main()
{
    int t;
    cin>>t;
    int points[6];
    while(t--){
        cin>>points[0]>>points[1]>>points[2]>>points[3]>>points[4]>>points[5];
        solve(points);
    }
    return 0;
}
