#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,maxx;
        vector<int>data;

        cin>>n;
        data.resize(n);
        for(int i=0;i<n;i++){
            cin>>data[i];
        }
        sort(data.begin(),data.end());
        maxx=data[n-1];
        cout<<data[n-1]<<" ";
        n--;
        for(int i=n-1;i>=0;i--){
            if(data[i]==maxx){
                cout<<data[i]<<" ";
                n--;
            }
            else{break;}
        }
        for(int i=0;i<n;i++){
            cout<<data[i]<<" ";
        }
        cout  << endl;
    }

    return 0;
}
