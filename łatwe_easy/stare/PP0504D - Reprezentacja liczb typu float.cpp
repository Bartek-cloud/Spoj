SPOJ submission 26079609 (C++ 4.3.2) plaintext list. Status: AC, problem PP0504D, contest SPOJPL. By bartekpl1997 (), 2020-06-01 17:26:59.

    //#define ANSI 
    #include <iostream> 
     
    using namespace std; 
    void printfloat(float x) {
        for (int i = sizeof x - 1; i >= 0; --i) {
            cout << hex << (unsigned int)(((const unsigned char*)(&x))[i])<<" ";
        }
        
    };
    int main() 
        {   
        int t; 
        float x;
        cin >> t; 
        /* wczytaj liczbÄ testÃ³w */   
        while(t){
            cin >> x;    
            printfloat(x);
            t--;    
        }   
        return 0;
    }  /* ........................  Tu napisz potrzebne funkcje */  