#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int dimesion,tests;
    cin>>dimesion;
    int * startcor = new int [dimesion];
    int * endcor = new int [dimesion];
    cin>>tests;
    while(tests--){
        long lenght_path=0;
        for(int i=0;i<dimesion;i++){
            cin>>startcor[i];
        }
        for(int i=0;i<dimesion;i++){
            cin>>endcor[i];
            lenght_path+=abs(startcor[i]-endcor[i]);
        }
        cout<<lenght_path<<endl;
    }
    delete[] startcor,endcor;
    return 0;
}
