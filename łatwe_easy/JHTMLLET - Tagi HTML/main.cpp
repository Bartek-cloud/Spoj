#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    string text;
    //cout<<'a'-32;
    while(getline(cin,text)){
        bool start=0;
        for(int i=0;i<text.length();i++){
            if(text[i]=='<'){
                start=1;
                if(text[i+1]==92 ){
                    cout<<char(92);
                    i++;
                }
                else{cout<<'<';}
            }
            else if(text[i]=='>'){
                    cout<<'>';
                    start=0;
            }
            else if(start==1){
                cout<<char(toupper(text[i]));
            }
            else{
                cout<<text[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
