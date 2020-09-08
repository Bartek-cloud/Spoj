#include <iostream>
#
using namespace std;

int main()
{
    int tests,min_letter,max_letter;
    string text;
    cin>>tests;
    while(tests--){
        cin>>text;
        min_letter=text[0];
        max_letter=text[0];
        for(int i=1;i<text.length();i++){
            if(min_letter>text[i]){
                min_letter=text[i];
            }
            if(max_letter<text[i]){
                max_letter=text[i];
            }
        }
        //cerr << min_letter<<" "<<max_letter << endl;
        cout<<max_letter-min_letter<<endl;
    }
    return 0;
}
