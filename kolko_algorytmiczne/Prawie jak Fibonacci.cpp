#include<iostream>
#include<vector>
using namespace std;

int main() {
	int testy,res=0,tmp;
	cin >>testy;
	vector<int> a;
	for (int i = 0; i < testy; i++) {
		cin >>tmp;
		a.push_back(tmp);


	}
	for (int i=0; i < testy-2; i++) {
		if (a[i] + a[i + 1] == a[i + 2]) {
			res += 1;
		}
	}
	cout << res << endl;
}
