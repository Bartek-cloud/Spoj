SPOJ submission 24402943 (C++ 4.3.2) plaintext list. Status: AC, problem RNO_DOD, contest SPOJPL. By bartekpl1997 (), 2019-09-16 08:29:05.

    #include <iostream>
     
    using namespace std;
     
    int main()
    {
     
        int zestawydan,a=0,b,ilezssum;
        cin>>zestawydan;
     
        for(int j=1;j<=zestawydan;j++)
        {
            cin>>ilezssum;
            for(int i=1;i<=ilezssum;i++)
            {
                  cin>>b;
                a+=b;
            }
            cout<<a<<endl;
            a=0;
        }
        return 0;
    }
     