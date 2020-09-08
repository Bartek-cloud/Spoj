#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1.0);//cmath

int main()
{
    int testy,ciecia,students;
    double d,obwod,kawalek;
    cin>>testy;
    for(int i=0;i<testy;++i){
        cin>>d>>students;
        obwod=d*pi;

        if(students%2){
            kawalek=(obwod/students)/2;
            ciecia =(students);
        }
        else{
            kawalek=obwod/students;
            ciecia =(students)/2;
        }




        cout<<fixed<<setprecision(3);
        cout << kawalek <<" "<<ciecia<< endl;
    //}
    }

    return 0;
}



