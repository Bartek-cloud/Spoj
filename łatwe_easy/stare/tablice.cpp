SPOJ submission 24466794 (C++ 4.3.2) plaintext list. Status: AC, problem PP0502B, contest SPOJPL. By bartekpl1997 (), 2019-09-26 15:58:34.

    #include <iostream>
     
    using namespace std;
     
    int main()
    {
        int zestawy_dan,ile,a;
        int tablica[100];
        cin>>zestawy_dan;
     
        cin.ignore();
        for(int j=1;j<=zestawy_dan;j++)
        {
            //wczytanie tablicy
            cin>>ile;
            for(int i=0;i<=ile-1;i++)
            {
                cin >>a;
                tablica[i]=a;
            }
            //wskaznik
            int *w;
            w = &tablica[ile-1];
            //cout w tyl
              for(int _=ile-1;_>=0;_--)
            {
                cout<<*w<<" ";
                w--;
            }
            cout<<endl;
        }
        return 0;
    }
     