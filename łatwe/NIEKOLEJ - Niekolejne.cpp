#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    if(n<3){
        cout<<"NIE";
    }
    else{
    for(int i=1;i<=n;i+=2){
        cout<<i<<" ";

    }

    for(int i=0;i<=n;i+=2){
        cout<<i<<" ";

    }
    }
    cout << endl;
    return 0;
}
