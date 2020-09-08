#include <iostream>

using namespace std;

int main()
{
    int num_instructions;
    int advance=0,max_advance=0;
    string instruction;
    cin>>num_instructions;
    while(num_instructions--){
        cin>>instruction;
        if(instruction=="for"){
            advance++;
        }
        if(instruction=="end"){
            max_advance=max(advance,max_advance);
            advance--;
        }
    }
    //cerr << max_advance << endl;
    cout << "O(";
    if(max_advance==0){cout<<1;}
    else if(max_advance==1){cout<<"n";}
    else{cout<<"n^"<<max_advance;}
    cout << ")"<<endl;
    return 0;
}
