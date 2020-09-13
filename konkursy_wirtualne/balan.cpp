#include <iostream>
#include <vector>
using namespace std;
vector<int>odp;
int main() {
	int t,n,n2,n4;
	cin >>t;
	
	for(int i = 0;i<t;i++)
	{
		cin >>n;
	
		if(!(n%4==0)){
			cout<<"NO"<<endl;
			continue;
		}
		else{
			n2=n/2;
			n4=n2/2;
			cout<<"YES"<<endl;//skoro jest, czas ustalic jakie
			int tmp=2;
			for(int j=1;j<=n2;j++){	
			tmp=j*2;
			odp.push_back(tmp);
		
			}
			for(int j=1;j<=n4;j++){
			tmp=j*2-1;
			odp.push_back(tmp);
			}
			for(int j=n4+1;j<=n2;j++){
			tmp=j*2+1;
			odp.push_back(tmp);
			}
			for(int j=0;j<n;j++){
			cout<<odp[j]<<" ";
			}
			cout<<endl;
			odp.clear();
			
		}
		
		
		
	}
	
	
	
	return 0;
}
