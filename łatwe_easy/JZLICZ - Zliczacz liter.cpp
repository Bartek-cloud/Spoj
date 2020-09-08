#include <iostream>
#include<string>
#include <string.h>
using namespace std;
int main()
{
    int alphabet_len='z'-'A'+1;
    int alphabet[alphabet_len];
    memset(alphabet,0,sizeof alphabet);
    int num_sentences;
    cin>>num_sentences;
    cin.ignore();
    string sentence;
    while(num_sentences--){
        getline(cin,sentence);
        for(int i=0;i<sentence.length();i++){
            alphabet[sentence[i]-'A']++;
        }
    }
    for(int i='a'-'A';i<='z'-'A';i++){
        if(alphabet[i]!=0){
            cout<<char(i+'A')<<" "<<alphabet[i]<<endl;
        }
    }
    for(int i=0;i<='Z'-'A';i++){
        if(alphabet[i]!=0){
            cout<<char(i+'A')<<" "<<alphabet[i]<<endl;
        }
    }
    return 0;
}
