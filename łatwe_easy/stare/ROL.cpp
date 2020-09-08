#include <iostream>
 
using namespace std;
 
int main() {
	int t;
	int n;
	cin >> t;
	while (t > 0) {
		cin >> n;
		int* alamakota = new int[n];
		cin >> alamakota[n - 1];
		for (int i = 0; i < n-1; i++) {
			cin >> alamakota[i];
		}
		for (int i = 0; i < n; i++) {
			cout << alamakota[i]<<" ";
		}
		t--;
		delete[] alamakota;
	}
}