#include <iostream>
#include <vector>
#include <string>
//#include <time.h>
using namespace std;
string convert_dec_to_hex(int dec_num){
    vector<int> hex_num;
    string hex;
    int rest;
    int j=0;
    do{
        rest=dec_num%16;
        hex_num.push_back(rest);
        dec_num=dec_num/16;
        j++;
    }while(dec_num>0);
    hex.resize(j);
    j=0;
    for(int i=hex_num.size()-1;i>=0;i--){
        switch(hex_num[i])
        {
        case 10:
            hex[j]='A';
            break;
        case 11:
            hex[j]='B';
            break;
        case 12:
            hex[j]='C';
            break;
        case 13:
            hex[j]='D';
            break;
        case 14:
            hex[j]='E';
            break;
        case 15:
            hex[j]='F';
            break;
        default:
            hex[j]=hex_num[i]+'0';
            break;
        }
        j++;
    }
    return hex;
};
string convert_dec_to_11(int dec_num){
    vector<int> eleven_num;
    string eleven;
    int rest;
    int j=0;
    do{
        rest=dec_num%11;
        eleven_num.push_back(rest);
        dec_num=dec_num/11;
        j++;
    }while(dec_num>0);
    eleven.resize(j);
    j=0;
    for(int i=eleven_num.size()-1;i>=0;i--){
        switch(eleven_num[i])
        {
        case 10:
            eleven[j]='A';
            break;
        default:
            eleven[j]=eleven_num[i]+'0';
            break;
        }
        j++;
    }
    return eleven;
};
int main()
{
    int tests,dec_num;
    //clock_t start,endt;
    cin>>tests;

    while(tests--){
        //start=clock();
        cin>>dec_num;
        cout<<convert_dec_to_hex(dec_num)<<" "<<convert_dec_to_11(dec_num)<<endl;
        //endt=clock();
        //cerr<<(endt-start)/CLOCKS_PER_SEC<<endl;
    }

    return 0;
}
/*
1
1000000

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
