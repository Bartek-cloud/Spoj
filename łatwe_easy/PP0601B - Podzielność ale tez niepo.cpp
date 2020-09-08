#include <iostream>

using namespace std;
void solve(int n,int x, int y){
    int current=x;
    while(current<n){//for(int i=x;i<n;i+=x)
        if(current%y != 0){
            cout<<current<<" ";
        }
        current+=x;
    }
    cout<<endl;
}
int main()
{
    int t,n,x,y;
    cin>>t;
    while(t--){
        cin>>n>>x>>y;
        solve(n,x,y);
    }
    return 0;
}
