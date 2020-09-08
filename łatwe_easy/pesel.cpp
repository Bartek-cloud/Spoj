#include <iostream>

using namespace std;

int main()
{
    int test;
    cin>>test;
    string pesel;
    while(test--){
        int suma=0;
        //for(int j=0;j<11;++j){
        cin>>pesel;
        suma += pesel[0]-'0';
        suma += (pesel[1]-'0')*3;
        suma += (pesel[2]-'0')*7;
        suma += (pesel[3]-'0')*9;
        suma += pesel[4]-'0';
        suma += (pesel[5]-'0')*3;
        suma += (pesel[6]-'0')*7;
        suma += (pesel[7]-'0')*9;
        suma += pesel[8]-'0';
        suma += (pesel[9]-'0')*3;
        suma +=  pesel[10]-'0';
        if(suma==0||suma%10!=0){
            cout<<"N"<<endl;
        }
        else {
                cout<<"D"<<endl;
        }
    }
    return 0;
}
