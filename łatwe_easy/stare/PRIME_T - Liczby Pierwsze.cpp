    #include <iostream>
    #include <math.h>
    using namespace std;
     
    bool czy_pierwsza(int sprawdzana)
    {
        if(sprawdzana==1)return false;
        for(int i = 2;i<=sqrt(sprawdzana);i++)
        {
            if(sprawdzana%i==0)
            {
                //cout<< sprawdzana<<" "<< i<<endl;
                return false;
                //break;
     
            }
     
        }
        return true;
    }
     
     
    int main()
    {
     
        int spraw,n;
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            cin>>spraw;
            if(czy_pierwsza(spraw)==true)cout<<"TAK"<<endl;
            else cout<< "NIE"<<endl;
        }
        return 0;
    }
     