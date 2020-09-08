#include <bits/stdc++.h>

using namespace std;
/*
bool* convert_dec_to_bin(int dec_num,int n){
    bool *bin_num = new bool[n] ;
    int rest;
    int j=n-1;
    do{
        rest=dec_num%2;
        bin_num[j]=rest;
        dec_num=dec_num/2;
        j--;
    }while(dec_num>0);
    while(j>=0){
        bin_num[j]=0;
        j--;
    }
    return bin_num;
}
*/
void convert_dec_to_bin(int dec_num,int n){
    bool* bin_num = new bool [n];
    //memset(bin_num,0,sizeof bin_num);
    int rest;
    int j=0;
    int acttual_size=0;
    do{
        rest=dec_num%2;
        bin_num[j]=rest;
        dec_num=dec_num/2;
        j++;
        acttual_size++;
    }while(dec_num>0);
    j=0;
    for(int i=0;i<n-acttual_size;i++){
        cout<<'0';
    }
    //cout<<n-acttual_size<<" "<<acttual_size<<endl;
    /*
    for(int i=0;i<acttual_size;i++){
        cerr<<bin_num[i];
    }
    cerr<<endl;
    */
    cout<<bin_num[0];
    for(int i=1;i<acttual_size;i++){
        if(bin_num[i] != bin_num[i+1]){
            cout<<1;
        }
        else {cout<<0;}
    }
    cout<<endl;
    delete[] bin_num;
}
int main()
{
    int n,m;
    cin>>n>>m;
    convert_dec_to_bin(m,n);
    return 0;
}


