#include <iostream>
long long fibonaci_iteratively(int fib_num) {
    if (!fib_num) { return 0; }
    else if (fib_num == 1) { return 1;}
    else if (fib_num > 1) {
        long long fib0 = 0,fib1 =1;//lepsze nazwy potrzebne
        long long fibn;
        for (int i = 1; i < fib_num; i++) {//w sumie mozna by napisac petla =fib_num -2 while(petla--)
            //obliczamy nastepn¹ liczbe fib po f1
            fibn = fib0 + fib1;
            //nastepnie przesuwamy o 1 liczbe fib do przodu
            fib0 = fib1;
            fib1 = fibn;
        }
        //petla for dominuje jako n
        return fibn;
    }
}
using namespace std;
int ile=1;
long long matrix[2][2]{1,1,1,0};
long long temp[2][2]{1,1,1,0};
long long jeden[2][2]{1,1,1,0};
const long long mod=1000000007;
void powmatrixmod(int n,int start){
    if(n>1){
        if(n%2==0){

            powmatrixmod(n/2,start);
            long long a=temp[0][0],b=temp[1][0],c=temp[0][1],d=temp[1][1];
            temp[0][0]=(a*a)%mod+(c*b)%mod;
            temp[1][0]=(b*a)%mod+(d*b)%mod;
            temp[0][1]=(a*c)%mod+(c*d)%mod;
            temp[1][1]=(b*c)%mod+(d*d)%mod;
        }

        if(n%2==1){

            powmatrixmod(n-1,start);
            long long ja=jeden[0][0],jb=jeden[1][0],jc=jeden[0][1],jd=jeden[1][1];
            long long a=temp[0][0],b=temp[1][0],c=temp[0][1],d=temp[1][1];
            temp[0][0]=(a*ja)%mod+(b*jc)%mod;
            temp[1][0]=(c*ja)%mod+(d*jc)%mod;
            temp[0][1]=(a*jc)%mod+(c*jd)%mod;
            temp[1][1]=(b*jc)%mod+(d*jd)%mod;
        }
        temp[0][0]%=mod;
        temp[1][0]%=mod;
        temp[0][1]%=mod;
        temp[1][1]%=mod;
    }
}
            /*


            */

int main()
{
    int tests,n;
    cin>>tests;
    while(tests--){
        long long numb;
        cin>>n;
        if(n==0){
            cout<<0<<endl;return 0;
        }
        else{
            powmatrixmod(n,n);
        }
        cout<<temp[1][0]<<endl;
        temp[0][0]=1;
        temp[1][0]=1;
        temp[0][1]=1;
        temp[1][1]=0;
    }
    return 0;
}

