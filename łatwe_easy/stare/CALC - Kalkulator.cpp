    #include<iostream>
     
    using namespace std;
     
    int main() {
    	char typ;
    	int a, b;
    	while (cin >> typ>>a>>b) {
    		switch (typ) {
    		case '+': cout << int(a + b) << endl; break;
    		case '-': cout << int(a - b) << endl; break;
    		case '*': cout << int(a * b) << endl; break;
    		case '/': cout << int(a / b) << endl; break;
    		case '%': cout << int(a % b) << endl; break;
    		}
     
    	};
     
     
     
    	return 0;
    } 