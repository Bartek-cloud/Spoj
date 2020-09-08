
#include<iostream>
#include <string.h>
using namespace std;

int main() {
    int memory[10];
    memset(memory,0,sizeof memory);
	char typ;
	int a, b;
	while (cin >> typ>>a>>b) {
		switch (typ) {
        case 'z': memory[a]=b;  break;
		case '+': cout << int(memory[a] + memory[b]) << endl; break;
		case '-': cout << int(memory[a] - memory[b]) << endl; break;
		case '*': cout << int(memory[a] * memory[b]) << endl; break;
		case '/': cout << int(memory[a] / memory[b]) << endl; break;
		case '%': cout << int(memory[a] % memory[b]) << endl; break;
		}
	};
	return 0;
}

