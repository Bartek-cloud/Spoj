#include <bits/stdc++.h>
#include<fstream>

using namespace std;

int main()
{
    int tests,date_size;
    ofstream file;
    file.open("dane.txt");
    cin>>tests;
    file<< tests<<"\n";
    while(tests--){
        cin>>date_size;
        file<< date_size<<"\n";
        for(int i=0;i<date_size;i++){
            file << (rand() % 50)+1 << " ";
        }

        file<< "\n";
    }
    file.close();
    return 0;
}
