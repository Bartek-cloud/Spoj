#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>>recomended;
vector<int>film_recomended;
int num_films,num_recomended;
vector<int>visited;
int solve(int node,int len){
    visited.push_back(node);
    int len_p=len+1;
    for(int i=0;i<recomended[node].size();i++){
        int vsize=visited.size();
        for(int j=0;j<vsize;j++){
            if(recomended[node][i]!=visited[j]){
                len=max(solve(recomended[node][i],len_p),len);
                int vsizeaf =visited.size();
                for(int k=vsize;k<vsizeaf;k++){
                    visited.pop_back();
                }
            }
        }
    }
    return len;
}
int main()
{
    cin>>num_films;
    for(int i=0;i<num_films;i++){
        cin>>num_recomended;
        int a;
        for(int j=0;j<num_recomended;j++){
            cin>>a;
            film_recomended.push_back(a-1);
        }
        recomended.push_back(film_recomended);

        film_recomended.clear();
    }
    int anws=0;
    anws=solve(0,1);
    for(int i=0;i<num_films;i++){
        anws=max(solve(i,1),anws);
        visited.clear();
    }
    cout<<anws<<endl;
    return 0;
}
/*
0 len1
1 len2
2 len3
4 len4
5 len4
7 len5
9 len6
8 len5
3 len3
6 len4
6
*/
