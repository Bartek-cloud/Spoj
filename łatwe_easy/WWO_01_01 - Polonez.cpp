#include <iostream>
#include <vector>
#include <string>
using namespace std;
int girls=0, boys=0;
void last_a(string imie){
    //cout<<imie[imie.length()-1];
    if( imie[imie.length()-1]=='a'){
        girls++;
        return;
    }
    boys++;
    return;

}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    string temp;
    for(int i=0;i<a+b+c;i++){
        cin>>temp;
        last_a(temp);
    }
    //cout<<endl<<girls<<" "<<boys<<endl;
    cout<<min(girls,boys)<<endl;

    return 0;
}
