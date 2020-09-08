#include<iostream>
#include <string.h>
using namespace std;

bool zwrotnosc(int max,bool macierz[100][100]) {
    for (int i = 0; i < max; i++) {
        if (macierz[i][i] == 0) {
            return 0;
        }
    }
    return 1;
}
bool przeciwzwrotnosc(int max,bool macierz[100][100]) {
    for (int i = 0; i < max; i++) {
        if (macierz[i][i] == 1) {
            return 0;
        }
    }
    return 1;
}
bool symetria(int max,bool macierz[100][100])
{
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < i; j++) {
            if (macierz[i][j] != macierz[j][i]){
                return 0;
            }
        }

    }
    return 1;
}
bool asymetria(int max,bool macierz[100][100])
{
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < i; j++) {
            if ((macierz[i][j] == 1 && macierz[j][i] == 1)){
                return 0;
            }
        }

    }
    return 1;
}
bool przechodnosc(int max,bool macierz[100][100])
{
    for (int i=0; i<max; i++) for (int j=0; j<max; j++)
    {
        if (macierz[i][j] == 0)
        {
            for (int k = 0; k < max; k++) {
                if ((macierz[i][k] * macierz[k][j]) == 1) {
                    return 0;
                }
            }
        }
    }
    return 1;
}
bool spojnosc(int max,bool macierz[100][100])
{
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < i; j++) {
            if (!(macierz[i][j] == 1 || macierz[j][i] == 1)){
                return 0;
            }
        }
    }
    return 1;
}

int main()
{

    bool macierz[100][100];//dlaczego 100?
    memset(macierz,0,sizeof macierz);
    int a, b, maxl = -1, max = -1;
    while (cin >> a >> b){
        if (a != 0) {
            if (a >= b)maxl = a-1;
            else maxl = b;
            if (maxl > max)max = maxl;
            macierz[a-1][b-1] = 1;//macierz sasiedztwa
        }
    }
    bool zw=zwrotnosc(maxl,macierz);
    bool pz= przeciwzwrotnosc(maxl,macierz);//mozna nie badac jesli zw
    bool sym=symetria(maxl,macierz);
    bool asym = asymetria(maxl,macierz);//mozna nie badac jesli sym
    bool prze =przechodnosc(maxl,macierz);
    bool spoj =spojnosc(maxl,macierz);
    bool rr = zw && sym && prze;
    bool rpl = zw && asym && prze && spoj;
    bool rpcz = zw && asym && prze;
    if (zw && pz && sym && asym && pz && spoj == 0)
    {
        cout << "X";
        return 0;
    }//else cout << "\n";
    if (zw) cout << "Z ";
    if (pz) cout << "PZ ";
    if (sym) cout << "S ";
    if (asym) cout << "AS ";
    if (prze) cout << "P ";
    if (spoj) cout << "SP ";
    if (rr && rpl && rpcz == 0)
    {
        cout << "X";
        return 0;
    }else cout << "\n";
    if (rr) cout << "RR ";
    if (rpl)
    {
        cout << "RPL ";
    }
    else
    {
        if (rpcz) cout << "RPCz";
    }
    if (rr + rpl + rpcz == 0)
    {
        cout << "X";
    }
    return 0;
}

