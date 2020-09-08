#include <iostream>
#include <string>
using namespace std;
void solve(int &ihour,int &iminute,int ring){
    iminute +=ring;
    ihour +=iminute/60;
    ihour = ihour%24;
    iminute=iminute%60;
}
void solcout(int ihour,int iminute){
    if(ihour<10){cout<<'0';}
    cout<<ihour<<':';
    if(iminute<10){cout<<'0';}
    cout<<iminute<<',';
}
int main()
{
    string start;
    cin>>start;
    string hour=start.substr(0,2);
    string minute=start.substr(3,2);
    int iminute =stoi(minute);
    int ihour =stoi(hour);
    int ring;
    solcout(ihour,iminute);
    solve(ihour,iminute,45);
    solcout(ihour,iminute);
    while(cin>>ring){
        solve(ihour,iminute,ring);
        solcout(ihour,iminute);
        solve(ihour,iminute,45);
        solcout(ihour,iminute);
    }
    cout<<endl;
    return 0;
}
