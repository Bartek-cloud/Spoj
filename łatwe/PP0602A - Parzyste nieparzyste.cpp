#include <iostream>

using namespace std;

int main()
{
    int tests,num;
    cin>>tests;
    while(tests--){
        cin>>num;
        int* values = new int [num];
        for(int i=0;i<num;i++){
            cin>>values[i];
        }
        for(int i=1;i<num;i+=2){
            cout<<values[i]<<" ";
        }
        for(int i=0;i<num;i+=2){
            cout<<values[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
