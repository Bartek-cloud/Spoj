#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int num_tests, cnt_A, cnt_B;
string A, B;
int main()
{
    cin >> num_tests;
    while(num_tests--){
        cin >> A >> B;
        map<int, int> m_A, m_B;
        cnt_A = cnt_B = 0;
        for(int i = 0; i < A.length(); i++){
            m_A[A[i]-'a']++;
        }
        for(int i = 0; i < B.length(); i++){
            m_B[B[i]-'a']++;
        }
        for(int k = 0; k < 26; k++)
        {
            int minim = min(m_A[k], m_B[k]);
            m_A[k] -= minim, m_B[k] -= minim;
            cnt_A += m_A[k], cnt_B += m_B[k];
        }
        cout << max(cnt_A, cnt_B) << "\n";
    }
    return 0;
}


/*
#include <iostream>
//AL_23_02 - Czas na anagramy
using namespace std;


bool finded[1000000];
void changes_to_anagram(string smaller_word,string bigger_word,int smaller_word_len,int bigger_word_len){
    //bool* finded= new bool [smaller_word_len];
    int similar_letter=0;
    for(int i=0;i<smaller_word_len;i++){
        finded[i]=0;
    }
    for(int i=0;i<smaller_word_len;i++){
        for(int j=0;j<bigger_word_len;j++){
            //cerr<<anagram_from[j]<<" "<<word[i]<<endl;
            if(smaller_word[i]==bigger_word[j]&&finded[j]==0){
                finded[j]=1;
                similar_letter++;
                //cerr<<anagram_from[j]<<" "<<word[i]<<endl;
                break;
            }
        }
    }
    //delete[] finded;
    int differences=smaller_word_len-similar_letter;
    int additional_letter=bigger_word_len-smaller_word_len;
    cout<<differences+additional_letter<<endl;
    return;
}
int main()
{
    string first_word, secound_word;
    int num_words;
    //cerr<<"kot";
    cin>>num_words;
    while(num_words--){
        cin>>first_word>>secound_word;
        int first_word_len=first_word.length();
        int sec_word_len=secound_word.length();
        if(first_word_len>sec_word_len){
            changes_to_anagram(secound_word,first_word,sec_word_len,first_word_len);
        }
        else{changes_to_anagram(first_word,secound_word,first_word_len,sec_word_len);}
    }
    return 0;
}
*/
/*
4
adam dama
abc abcd
abcd abcf
abcd abc

2
abcdd abceeee
abcdd abceeeee

2
abceeee abcdd
abceeeee abcdd
*/
