SPOJ submission 24467802 (C++ 4.3.2) plaintext list. Status: AC, problem ETI06F1, contest SPOJPL. By bartekpl1997 (), 2019-09-26 17:39:57.

    #include <iostream>
    #include <cmath>
    #include <iomanip>
    #define M_PI 3.14159265358979323846
     
    using namespace std;
     
    int main()
    {
        //cout << M_PI << endl;
        //float pi=3.141592654;
        float promienie,odlegosc,kat,r;
        cin >>promienie>>odlegosc;
        kat = acos((odlegosc/2)/promienie);
        //cout << kat << endl;
        r = sin(kat)*(promienie);
        // cout << r << endl;
         cout<<fixed<<r*M_PI*r<< endl;
        return 0;
    } 