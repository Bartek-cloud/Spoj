
#include <iostream>
#include <vector>
//#include <string>
using namespace std;
 
int main()
{
	int a;
	vector <int>b;
	string input;
	//getline(cin,input);
	//input.split(" ");
	while(cin>>a){
		b.push_back(a);
	}
	for(int i=b.size()-1;i>=0;i--){
		cout<<b[i]<<" ";
	}
 
	//}
	//cout<<input;
	cout<<endl;
	return 0;
}
 