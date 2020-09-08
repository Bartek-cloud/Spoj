nclude<iostream>
#include<string>
 
using namespace std;
 
int main() {
	int D;
	cin >> D; //liczba przykladow.
	for (int i=0; i < D; i++)
	{
		int n;
		cin >> n;
		int x = 0, y = 0;
		int kierunek = 0, kroki = 0;
		for (int j = 0; j < n; j++)//liczba wskazowek
		{
			
			cin >>kierunek;//kierunek 0 - pÃ³Ånoc  1 - poÅudnie 2 - zachÃ³d	3 - wschÃ³d
			cin >> kroki;
			switch (kierunek) {
			case 0:
				y = y + kroki;
				break;
			case 1:
				y = y - kroki;
				break;
			case 2:
				x = x + kroki;
				break;
			case 3:
				x = x - kroki;
				break;
			}
		}
		if (y == 0 && x == 0) { cout << "studnia"<<endl; continue; }
		if(y>0) { cout << 0 << " " << y<<endl; }
		else if(y<0) { cout << 1 <<" "<< -y << endl; }
		if (x > 0) { cout << 2 << " " << x << endl; }
		else if (x < 0) { cout << 3 << " " << -x << endl; }
	}
 
 
	return 0;
} 