SPOJ submission 24396046 (CPP14) plaintext list. Status: AC, problem FLAMASTE, contest SPOJPL. By bartekpl1997 (), 2019-09-14 17:15:58.

    #include <iostream>
     
    using namespace std;
     
    int main()
    {
        int ile,ilew=0,a,leng;
        cin >> ile;
        string word;
        string wordl;
        string b;
        for (int i=1; i<=ile; i++)
        {
            cin >>word;
            wordl=word;
            char first,secound;
            leng=word.length();
            for(int j=0;j<=leng;j++)
            {
                //cout<<j<<endl;
                //cout<<first<<endl;
     
     
                secound=word[j];
                //cout<<secound<<endl;
                if(secound==first)
                {
                    if(ilew==0)a=j;
                    ilew+=1;
                    //cout<<"ile"<<ilew<<endl;
     
                }
                else
                {
                    //cout<<"ELSE";
     
     
                    if(ilew>=2)
                    {
                        b = to_string(ilew+1);
                        //cout<<"REPLACE"<<ilew+1<<endl;
                        word.replace(a-1,ilew+1,first+b);
                        ilew=0;
                        j=-(ilew-2);
                        leng=word.length();
     
                    }
                    else ilew=0;
                }
                first=word[j];
     
     
     
            }
            ilew=0;
            //cout<<wordl<<endl;
            cout << word << endl;
        }
     
     
        return 0;
    }
     