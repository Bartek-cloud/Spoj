#include <iostream>
using namespace std;



/*
bool eat(int i){
    bool lflag=1,rflag=1,liml=0,limr=0,temp;
    int j=1;
    do{
        temp=1;
        if(lflag){
            if(piranhas[i-j]<piranhas[i]+size){
                size++;
                temp=0;
            }
            else if(piranhas[i-j]==300001){
                lflag=0;liml=1;
            }
        }
        if(rflag){
            if(piranhas[i+j]>piranhas[i]+size){
                size++;
            }
            else if(piranhas[i+j]==300001){
                rflag=0;limr=1;
            }else{rflag=0;}
            }
        if((lflag&&temp&&piranhas[i-j]<piranhas[i]+size)){
            size++;
            lflag=1;
        }else{lflag=0;}
        j++;
    }while(lflag||rflag);
    if(limr&&liml){
        return 1;
    }
    return 0;
}
*/
int main()
{
    int numbof,tests;
    int piranhas[300000];
    cin>>tests;
    while(tests--){
        cin>>numbof;
        cin>>piranhas[0];
        int maxx=piranhas[0];
        bool flag=1;
        for(int i=1;i<numbof;i++){
            cin>>piranhas[i];
            maxx=max(piranhas[i],maxx);
        }
        if(piranhas[0]==maxx&&(piranhas[0]>piranhas[1])){
            cout<<1<<endl;
            flag=0;
        }
        else if(piranhas[numbof-1]==maxx&&(piranhas[numbof-1]>piranhas[numbof-2])){
            cout<<numbof<<endl;
            flag=0;
        }else
        {
            for(int i=1;i<numbof-1;i++){
                if(piranhas[i]==maxx){
                    if((piranhas[i]>piranhas[i-1])||(piranhas[i]>piranhas[i+1])){
                        cout<<i+1<<endl;
                        flag=0;
                        break;
                    }
                }
            }
        }
        if(flag){cout<<-1<<endl;}

    }
    return 0;
}
/*
3
9 8 10
*/
