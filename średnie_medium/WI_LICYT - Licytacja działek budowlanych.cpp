#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class offer{
    public:
    long long pesel;
    int bet;
    vector<int>have;
    int id;

    void cout_have(){
        unsigned int length = have.size();
        if(length>0){
            cout<<pesel<<" ";
            for(unsigned int i=0;i<length;i++){
                cout<<have[i]<<" ";
            }
            cout<<length*bet<<endl;
        }
    }
};
struct plot{
    int owner_id=-1;
    int bet=0;
    int place;
};
void aplly_offer(plot & a_plot,offer & temp){
    if(temp.bet > a_plot.bet){
        a_plot.bet=temp.bet;
        //cerr<<temp.id;
        a_plot.owner_id=temp.id;
    }
}
void wide_aplly_offer(offer & temp,plot** plots,int &side_size,int &left_up,int &right_down){
    //cerr<<temp.id;
    for(int x=(left_up-1)%side_size;x<=(right_down-1)%side_size;x++){
        for(int y=(left_up-1)/side_size;y<=(right_down-1)/side_size;y++){
            aplly_offer(plots[x][y],temp);
        }
    }
}
bool pesel_sort(offer a,offer b){
    return (a.pesel<b.pesel);
}
int main()
{
    int side_size, left_up,right_down;
    cin>>side_size;
    plot** plots = new plot *[side_size];
	for(int i=0;i<side_size;i++){
		plots[i] = new plot[side_size];
    }
    int k=1;
    for(int i=0;i<side_size;i++){
        for(int j=0;j<side_size;j++){
            plots[j][i].place=k;
            k++;
        }
    }
    /*
    for(int i=0;i<side_size;i++){
        for(int j=0;j<side_size;j++){
            cerr<<plots[i][j].place<<" ";
        }
        cerr<<endl;
    }
    */
    vector<offer>offers;
    offer temp;
    k=0;
    while(cin>> temp.pesel>>left_up>>right_down>>temp.bet){
        temp.id=k;
        k++;
        offers.push_back(temp);
        wide_aplly_offer(temp,plots,side_size,left_up,right_down);
    }
    for(int i=0;i<side_size;i++){
        for(int j=0;j<side_size;j++){
            //cerr<<plots[j][i].owner_id<<" ";
            if(plots[j][i].owner_id>-1){
                offers[plots[j][i].owner_id].have.push_back(plots[j][i].place);//moze uzyc sum prefixowych 2d?
            }
        }
        //cerr<<endl;
    }
    sort(offers.begin(),offers.end(),pesel_sort);
    for(unsigned int i=0;i<offers.size();i++){
        offers[i].cout_have();
    }
    for(int i=0;i<side_size;i++){
		delete [] plots[i];
    }
	delete [] plots;
    return 0;
}
