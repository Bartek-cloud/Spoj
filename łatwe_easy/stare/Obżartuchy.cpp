SPOJ submission 24174886 (C++ 4.3.2) plaintext list. Status: AC, problem GLUTTON, contest SPOJPL. By bartekpl1997 (), 2019-08-01 17:20:36.

    #include <iostream>
     
    using namespace std;
     
    int serie,lo,cwp,dzien=86400,suma=0,reszta=0;
     
    int main()
    {
       cin>>serie;
       for (int i=1;i<=serie;i++)
       {
            cin>>lo>>cwp;
            int v[lo],ciastka[lo];
            for (int i=0;i<=lo-1;i++)
            {
                cin>>v[i];
                ciastka[i]=dzien/v[i];
                suma += ciastka[i];
     
            }
            if (suma%cwp != 0)reszta=1;
            cout<<suma/cwp+reszta<<endl;
            suma=0;
            reszta=0;
       }
        return 0;
    }
     