#include <iostream> 
#include <cstring>
using namespace std; 
 
char* string_merge(char*s1, char*s2,int & a)
{
 
    char* result = new char[3001];
    for (int i = 0; i <= 1001; i++)
    {
        //cout <<"test"<< i << s1[i] << s2[i]<<endl;
 
        if (s1[i] != '\0' && s2[i] != '\0')
        {
            result[i*2] = s1[i];
            result[ i*2+1] = s2[i];
            a+=2;
        }
        else
            break;
    }
    return result;
}
int main()
{
    int t;
    cin >> t; /* wczytaj liczbÄ testÃ³w */
    char S1[1001], S2[1001], * S;
    cin.getline(S1, 1001);
    while (t) {
        cin.getline(S1, 1001, ' ');
        cin.getline(S2, 1001);
        int a = 0;
        S = string_merge(S1, S2,a);
        for (int i = 0; i < a; i++){
         
         
                cout << S[i];
         
        }
        cout << endl;
        delete[] S;
        t--;
    }
    return 0;
   
} 