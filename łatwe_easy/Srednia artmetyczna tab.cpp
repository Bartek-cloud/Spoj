#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int data[101];//cyborg
    while(t--){
        int i=0,n;
        float avarage=0;
        while(cin>>n){
            int sum=0;
            for(int i = 0;i < n;i++){
                cin>>data[i];
                sum += data[i];
            }
            avarage=sum/float(n);
            float dist,min_dist=101;;
            int id_narest_ava=101;
            //cerr<<avarage<<endl;
            for(int i = 0;i < n;i++){
                dist = fabs(data[i]-avarage);
                if(dist<min_dist){
                    id_narest_ava=i;
                    min_dist=dist;
                }
                //cerr<<data[i]<<endl<<dist<<endl;
            }
            //cerr<<id_narest_ava<<endl;
            cout<<data[id_narest_ava]<<endl;
        }
    }
    return 0;
}
