#include <iostream>

using namespace std;
int test_imie(string imie){
    if(!(imie[0] >= 65 && imie[0] <= 90)){return 1;}//if first leater is not big
    for(int i=1;i<imie.size()-1;i++){
        if(!(imie[i] >= 97 && imie[i] <= 122)){return 2;}//if rest char is not small leater
    }
    return 0;
    }
int test_naz(string naz){
    //if first leater is not big
    for(int i=1;i<naz.size()-1;i++){
        if(!(naz[i] >= 97 && naz[i] <= 122)){return 2;}//if rest char is not small leater
    }
    return 0;
    }
int test_data(string data){
    if(data.size()!=10)return 1;
    if(data[0]!=49&&data[0]!=50){return 2;}//1000||2000
    if(data[0]==50){ //2000
        if(data[1]!=48||data[2]!=48||data[3]!=48){
            return 3;
        }
    }
    else if(data[1]!=57){return 4;}//1900
    if(!(data[2] >= 48 && data[2] <= 57)){return 5;} //19xx x is digit
    if(!(data[3] >= 48 && data[3] <= 57)){return 5;}
    //if(!(data[4] != '-' )){return 6;}
    if(data[5]==48){//if xM x is 0  MM
        if(!(data[6] >= 49 && data[6] <= 57)){return 7;}//Mx x is not 1-9
    }
    else if(data[5]==49){//if xM x is 1
        if(data[6]!=48&&data[6]!=49&&data[6]!=50){return 8;}//10 11 12
    }
    else {return 9;} //xM x isn not 0 1
    //if(!(data[7] != '-' )){return 6;}
    if(data[8]==48){//if xM x is 0  DD
        if(!(data[9] >= 49 && data[9] <= 57)){return 10;}//Dx x is not 1-9
    }
    else if(data[8] >= 49 && data[8] <= 50){//1-2
        if(!(data[9] >= 48 && data[9] <= 57)){return 11;}//0-9
    }
    else if(data[8]==51){
        if(data[9]!=48&&data[9]!=49){return 12;}
    }
    else {return 13;}
    return 0;
}
int main()
{
    string itext,imie,ntext,naz,dtext,urtext,data;
    while(cin>>itext)
    {
        cin>>imie>>ntext>>naz>>dtext>>urtext>>data;
        //cerr<<data;
        //cerr<<test_data(data);
        if(test_imie(imie)){cout<<0<<endl;continue;}
        if(test_naz(naz)){cout<<1<<endl;continue;}

        if(test_data(data)){cout<<2<<endl;continue;}
        cout<<3<<endl;




    }
    return 0;
}

/*

Imie: Roman; Nazwisko: Kowalski6; Data ur.: 0000-01-30
Imie: Andrzej; Nazwisko: Kowal; Data ur.: 2000-10-10
Imie: roman; Nazwisko: No-wak; Data ur.: 1099-11-12
Imie: Alicja; Nazwisko: Nowak; Data ur.: 19*9-01-01
Imie: Roman; Nazwisko: Kowalski6; Data ur.: 1900-31-12
Imie: Andrzej; Nazwisko: Kowal; Data ur.: 1900-12-31
Imie: roman; Nazwisko: No-wak; Data ur.: 1900-00-00
Imie: Alicja; Nazwisko: Nowak; Data ur.: 1900-02-02

*/
