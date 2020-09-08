#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
 
 
double newtontri_tab(int n,int k,vector<vector<double>>&tab){
     double lg,pg;
    //cout<<n<<k;
 
    if(n==k||k==0){
        return 1;
    }
    else if(tab[n][k]!=0){
        return tab[n][k];
    }
    else {
        lg=newtontri_tab(n-1,k-1,tab);
        pg=newtontri_tab(n-1,k,tab);
        //cout<<" "<<lg<<pg<<endl;
        tab[n][k] =lg+pg;
        return lg+pg;
    }
}
 
int main()
{
 
    vector<vector<double>>tab;
    vector<double>a;
    a.assign(1001,0);
    tab.assign(1001,a);
 
    int n,k,cas;
    double res;
    cin >>cas;
    for(int i=0;i<cas;++i){
        cin>>n>>k;
        if(n==0){cout<<1<<endl;continue;}
        if ( k > n/2 )k = n - k;
        res=newtontri_tab(n,k,tab);
        cout<<setprecision(1000)<<res<<endl;
    }
    return 0;
}