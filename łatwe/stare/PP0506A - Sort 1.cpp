#include <iostream>
#include <algorithm>
 
using namespace std;
 
class tabela
{
public:
	string napis;
	int x,y,odleglosc;
	friend bool operator <(const tabela &tab1, const tabela &tab2)
	{
		return tab1.odleglosc<tab2.odleglosc;
	}
};
 
void wczytaj(tabela *tab, int liczby);
void quicksort(tabela *tab, int lewy, int prawy);
 
 
int t;   //liczba testÃ³w
int ile; //liczba wspÃ³ÅrzÄdnych
 
int main()
{
ios_base::sync_with_stdio(0);
cin>>t;
while (t--) {
	ios_base::sync_with_stdio(0);
	cin >> ile;
	tabela * tab;
	tab = new tabela [ile+1];
	wczytaj(tab,ile);
	//quicksort(tab,0,ile-1);
	std::sort(tab, tab+ile);
 
	for (int i=0; i<ile; i++) {
		cout << tab[i].napis << " " << tab[i].x << " "<< tab[i].y;
		if (i!=ile-1) {
			cout << endl;
		}
	}
	cout << endl;
	delete [] tab;
}
	return 0;
}
 
void wczytaj(tabela *tab, int liczby) {
 
	int a,b;
	string nazwa;
		for (int i=0; i<liczby; i++) {
			cin >> nazwa >> a >> b;
			tab[i].napis = nazwa;
			tab[i].x = a;
			tab[i].y = b;
			tab[i].odleglosc = (a*a+b*b);
		}
	 }
 