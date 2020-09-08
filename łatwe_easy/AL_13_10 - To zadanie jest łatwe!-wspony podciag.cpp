#include <bits/stdc++.h>
using namespace std;

int main(){
    int tests;
    string a,b;
    cin>>tests;
    while(tests--){
        cin>>a>>b;
        int k=0;
        for(int i=0;i<a.length();i++){
            if(a[i]==b[k]){
                k++;
            }
        }
        if (k==b.length()){
            cout<<"Tak"<<endl;
        }
        else{
             cout<<"Nie"<<endl;
        }
    }
return 0;
}

