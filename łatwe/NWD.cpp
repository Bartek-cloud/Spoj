SPOJ submission 26112663 (CPP14) plaintext list. Status: AC, problem PP0501A, contest SPOJPL. By bartekpl1997 (), 2020-06-08 10:08:26.

    #include <iostream>
    using namespace std;
    int nwd(int a, int b) {
    	if (b == 0)
    		return a;
    	return nwd(b, (a % b));
    }
    int main(){
        int a,b,zestawy_dan;
        cin>>zestawy_dan;
        for(int j=1;j<=zestawy_dan;j++)
        {
            cin>>a>>b;
            cout << nwd(a,b) << endl;
        }
     
        return 0;
    } 