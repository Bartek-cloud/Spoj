#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double enemies[1000];
    double num_enemies,hero_dodge;
    int tests;
    cin>>tests;
    cout<<setprecision(-7);
    while(tests--){
        cin>>num_enemies>>hero_dodge;
        for(int i=0;i<num_enemies;i++){
            cin>>enemies[i];
        }
        double sum=0;
        for(int i=0;i<num_enemies;i++){
            //cout << 1/(1-enemies[i]) << endl;
            sum+= 1/(1-enemies[i]);
        }
        cout <<setprecision(6) <<fixed << sum*(1-hero_dodge) << endl;
    }
    return 0;
}
