
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int convertTime(string time)
{
    int result;

    result = atoi(time.substr(0, time.find(":")).c_str()) * 60;
    result += atoi(time.substr(time.find(":")+1).c_str());

    return result;
}

int main()
{
    ios_base::sync_with_stdio(0);
    vector <string> bestRunners;
    int n, bestTime;
    string firstName, lastName, time;

    cin >> n;
    while(n--)
    {
        cin >> firstName >> lastName >> time;

        if(bestRunners.size() == 0 || convertTime(time) < bestTime)
        {
            bestTime = convertTime(time);
            bestRunners.clear();
            bestRunners.push_back(firstName + " " + lastName);
        }
        else if(convertTime(time) == bestTime)
            bestRunners.push_back(firstName + " " + lastName);
    }

    for(int i = 0; i < bestRunners.size(); i++)
        cout << bestRunners[i] << endl;
}
/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num_participants;
    cin>>num_participants;
    string *participants = new string [num_participants];
    string *sec_name = new string [num_participants];
    string *first_name = new string [num_participants];
    cin>>first_name[0]>>sec_name[0]>>participants[0];
    string minute=participants[0].substr(3,2);
    string sec=participants[0].substr(0,2);
    int minminute=stoi(minute);
    int minsec=stoi(sec);
    vector <int> minpar;
    minpar.push_back(0);
    for(int i=1;i<num_participants;i++){
        cin>>first_name[i]>>sec_name[i]>>participants[i];
        string minute=participants[i].substr(0,2);
        string sec=participants[i].substr(3,2);
        int iminute =stoi(minute);
        int isec =stoi(sec);
        if(iminute<minminute){minpar.clear();minpar.push_back(i);minminute=iminute;minsec=isec;}
        else if(iminute==minminute){
           if(isec<minsec){minpar.clear();minpar.push_back(i);minminute=iminute;minsec=isec;}
           else if(isec==minsec){minpar.push_back(i);}
        }
    }
    for(int i=0;i<minpar.size();i++){
        cout<<first_name[minpar[i]]<<" "<<sec_name[minpar[i]]<<endl;
    }
    return 0;
}
*/
