#include <iostream>
#include<string.h>
#include <math.h>
#include <limits.h>
using namespace std;

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
void cout_boo(bool* boo,int n){
    for(int i=0;i<n;i++){
        cout<<*boo;
        boo++;
    }
}
int convert_to_dec(string bin){
    int dec=0;
    int j=0;
    for(int i=bin.length()-1;i>=0;i--){
        dec+=(bin[i]-48)*(pow(2,j));//-48 z char do bool
        j++;
    }

    return dec;
}
int how_many_day_in_month(int imonth,int iyear ){
    switch(imonth){
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            return 31;
        case 2:
        if(iyear%4){
            return 29;
        }
        else{return 28;}
        case 4:case 6:case 9:case 11:
            return 30;
        default:
            cerr<<"month "<<imonth <<" non exist"<<endl;
            return INT_MAX;
    }
}
void convert_to_DOSFAT(string enter_data){
    int year=atoi((enter_data.substr(0,4)).c_str());
    int month=atoi((enter_data.substr(5,2)).c_str());
    int day=atoi((enter_data.substr(8,2)).c_str());
    if(year<1980||year>2107){
        cout<<"ERROR"<<endl;
        return;
    }
    if(month<=0||month>12){
        cout<<"ERROR"<<endl;
        return;
    }
    if(day<=0||day>how_many_day_in_month(month,year)){
        cout<<"ERROR"<<endl;
        return;
    }
    bool* bin_year = convert_dec_to_bin(year-1980,7);
    cout_boo(bin_year,7);
    bool* bin_month = convert_dec_to_bin(month,4);
    cout_boo(bin_month,4);
    bool* bin_day = convert_dec_to_bin(day,5);
    cout_boo(bin_day,5);
}
void convert_to_ISO8601(string enter_data){

    int year =(convert_to_dec(enter_data.substr(0,7).c_str())+1980);
    int month =(convert_to_dec(enter_data.substr(7,4).c_str()));
    int day=(convert_to_dec(enter_data.substr(11,5).c_str()));
    if(month==0||month>12){
        cout<<"ERROR"<<endl;
        return;
    }
    if(day==0||day>how_many_day_in_month(month,year)){
        cout<<"ERROR"<<endl;
        return;
    }
    cout<<year<<"-";
    if(month<10){cout<<"0";}
    cout<<month<<"-";
    if(day<10){cout<<"0";}
    cout<<day<<endl;
    //int year =convert_to_dec
}

int main()
{
    string enter_data;
    cin>>enter_data;
    if(enter_data.length()==10){
        convert_to_DOSFAT(enter_data);
    }else{
        convert_to_ISO8601(enter_data);
    }
    return 0;
}
