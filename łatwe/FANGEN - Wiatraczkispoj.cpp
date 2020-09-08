#include<iostream>
#include <vector>
using namespace std;

void fangenp (int enter, int now, vector<vector<char>>& a) {
	if (now == 0) {
		return;
	}
	for (int i=0; i < now; i++) {
		a[i+enter][enter-now] = '*';
		a[enter-now][enter-i-1] = '*';
		a[enter-i-1][now+enter-1] = '*';
		a[now + enter - 1][i+enter] = '*';
		
	}
	fangenp(enter,now-1,a);

}
void fangenm(int enter, int now, vector<vector<char>>& a){
	if (now == 0) {
		return;
	}
	for (int i = 0; i < now; i++) {
		a[enter-i-1][enter - now] = '*';
		a[enter - now][i+enter] = '*';
		a[i+enter][now + enter - 1] = '*';
		a[now + enter - 1][enter - i - 1] = '*';

	}
	fangenm(enter, now - 1, a);

}
int main() {
	int r,size;
	vector<vector<char>>a;
	vector<char>tab;
	
	cin >> r;
	while (r != 0) {
		if (r < 0) {
			size = 2 * -r;
		}
		else size = 2 * r;
		

		for (int j = 0; j < size; j++) {
			tab.push_back('.');//wype³niam zerami
		}
		for (int i = 0; i < size; i++)
		{
			a.push_back(tab); //wype³niam vector vectorami
		}
		if (r < 0) {
			fangenm(-r,-r, a);
		}
		else fangenp(r,r, a);
		
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				cout << a[j][i];
			}
			cout << endl;
		}
		a.clear();
		cin >> r;
	}
	
}