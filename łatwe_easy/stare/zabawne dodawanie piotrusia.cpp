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
     