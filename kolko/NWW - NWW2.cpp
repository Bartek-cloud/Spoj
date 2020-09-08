#include <iostream>
#include <vector>
//a<10^20;
using namespace std;
unsigned long long nwd(unsigned long long a,unsigned long long b) {
    if (b == 0)
        return a;
    return nwd(b, (a % b));
}
unsigned long long nww(unsigned long long a,unsigned long long b){
    return ((a/nwd(a,b))*b);
};

int main(){
    unsigned long long tests,date_size;
    cin>>tests;
    while(tests--){
        unsigned long long anwser=1,temp;
        cin>>date_size;
        for(int i=0;i<date_size;i++){
            cin>>temp;
            anwser=nww(anwser,temp);
        }
        cout<<anwser<<endl;
    }
    return 0;
}
