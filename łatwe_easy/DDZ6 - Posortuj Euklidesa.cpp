#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int nwd(int a, int b) {
	if (b == 0)
		return a;
	return nwd(b, (a % b));
}

bool cmp(const int a,const int b) {
	if (nwd(a,1260) == nwd(b,1260)) {
		if (a < b) {
			return true;
		}
		else return false;
	}
	else if (nwd(a,1260) > nwd(b,1260)) { return true; }
	else return false;

}

int main() {
	
	
	int testy, tmp;
	cin >> testy;
	vector<int> a;
	for (int i = 0; i < testy; i++) {
		cin >> tmp;
		a.push_back(tmp);
	}
	stable_sort(a.begin(), a.end(),cmp);
	for (int i = 0; i < testy-1; i++) {
		cout << a[i]<<" ";
	}
	cout << a[testy - 1]<<endl;
	
}