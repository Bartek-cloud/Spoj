#include <iostream>
#include<algorithm>
#include<cstring>
//AL_30_01 - Anagramy
using namespace std;
bool is_anagram(string anagram_from,string word){
    int word_len=word.length();
    int ana_len=anagram_from.length();
    if(word_len>ana_len){
        return 0;
    }
    bool* finded= new bool [ana_len];
    int sim=0;
    for(int i=0;i<ana_len;i++){
        finded[i]=0;
    }
    for(int i=0;i<word_len;i++){
        for(int j=0;j<ana_len;j++){
            //cerr<<anagram_from[j]<<" "<<word[i]<<endl;
            if(word[i]==anagram_from[j]&&finded[j]==0){
                finded[j]=1;
                sim++;
                //cerr<<anagram_from[j]<<" "<<word[i]<<endl;
                break;
            }
        }
    }
    delete[] finded;
    //cerr<<sim;
    if(sim==ana_len){
        return 1;
    }
    return 0;
}
int main()
{
    string anagram_from, word;
    int anagrams=0,num_words;
    cin>>anagram_from;
    cin>>num_words;
    for(int i=0;i<num_words;i++){
        cin>>word;
        if(is_anagram(anagram_from,word)){
            anagrams++;
        }
    }
    cout<<anagrams;
    return 0;
}
/*
algorytm 1
logarytm
*/
