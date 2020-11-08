#include <iostream>
#define n=10000
using namespace std;

int main()
{
    int tests;
    string numb;
    cin>>tests;
    while(tests--){
        cin>>numb;
        int anws=10*(numb[0]-48-1);
        switch(numb.length()){
            case 1:anws+=1;
                break;
            case 2:anws+=3;
                break;
            case 3:anws+=6;
                break;
            case 4:anws+=10;
                break;

        }
        cout << anws << endl;
    }
    return 0;
}
