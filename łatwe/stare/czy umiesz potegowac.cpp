SPOJ submission 24385947 (C++ 4.3.2) plaintext list. Status: AC, problem PA05_POT, contest SPOJPL. By bartekpl1997 (), 2019-09-12 21:47:31.

    #include <iostream>
     
    using namespace std;
    void rozklad(int da,int *one)
    {
     
    *one=da%10;
    }
     
    int main()
    {
        int ile;
        cin >> ile;
        for (int i=1; i<=ile; i++)
        {
            int a,b;
            int reszta;
            cin >>a>>b;
            a=a%10;
            switch(a)
            {
            case 1:
                {
                cout<<1<<endl;
                continue;
                }
            case 5:
                {
                cout<<5<<endl;
                continue;
                }
            case 6:
                {
                cout<<6<<endl;
                continue;
                }
            case 0:
                {
                cout<<0<<endl;
                continue;
                }
            case 2:
            {
     
                reszta=b%4;
                switch(reszta)
                {
                case 0:
                    {
                        cout<<6<<endl;
                        continue;
                    }
                case 1:
                    {
                        cout<<2<<endl;
                        continue;
                    }
                case 2:
                    {
                        cout<<4<<endl;
                        continue;
                    }
                case 3:
                    {
                        cout<<8<<endl;
                        continue;
                    }
                }
            }
            case 3:
            {
                reszta=b%4;
                switch(reszta)
                {
                case 0:
                    {
                        cout<<1<<endl;
                        continue;
                    }
                case 1:
                    {
                        cout<<3<<endl;
                        continue;
                    }
                case 2:
                    {
                        cout<<9<<endl;
                        continue;
                    }
                case 3:
                    {
                        cout<<7<<endl;
                        continue;
                    }
                }
            }
            case 4:
            {
                reszta=b%2;
                switch(reszta)
                {
                case 0:
                    {
                        cout<<6<<endl;
                        continue;
                    }
                case 1:
                    {
                        cout<<4<<endl;
                        continue;
                    }
                }
            }
            case 7:
            {
                reszta=b%4;
                switch(reszta)
                {
                case 0:
                    {
                    cout<<1<<endl;
                    continue;
                    }
                case 1:
                    {
                    cout<<7<<endl;
                    continue;
                    }
                 case 2:
                    {
                    cout<<9<<endl;
                    continue;
                    }
                 case 3:
                    {
                    cout<<3<<endl;
                    continue;
                    }
     
     
                }
            }
            case 8:
            {
                reszta=b%4;
                switch(reszta)
                {
                case 0:
                    {
                    cout<<6<<endl;
                    continue;
                    }
                case 1:
                    {
                    cout<<8<<endl;
                    continue;
                    }
                 case 2:
                    {
                    cout<<4<<endl;
                    continue;
                    }
                 case 3:
                    {
                    cout<<2<<endl;
                    continue;
                    }
     
     
                }
            }
            case 9:
            {
                reszta=b%2;
                switch(reszta)
                {
                case 0:
                    {
                    cout<<1<<endl;
                    continue;
                    }
                case 1:
                    {
                    cout<<9<<endl;
                    continue;
                    }
                }
            }
            }
        }
     
        return 0;
    } 