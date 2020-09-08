#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int>stos;
    char command;
    while(cin>>command){
        if(command=='+'){
            int value;
            cin>>value;
            if(stos.size()<10){
                stos.push_back(value);
                cout<<":)"<<endl;
            }
            else{ cout<<":("<<endl;}
        }
        else {
            if(stos.size()>0){
                cout<<stos[stos.size()-1]<<endl;
                stos.pop_back();
            }
        else{ cout<<":("<<endl;}
        }
    }
    return 0;
}
