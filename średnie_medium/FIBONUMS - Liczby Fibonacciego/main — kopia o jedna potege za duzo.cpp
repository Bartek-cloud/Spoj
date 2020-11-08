#include <iostream>
long long fibonaci_iteratively(int fib_num) {
    if (!fib_num) { return 0; }
    else if (fib_num == 1) { return 1;}
    else if (fib_num > 1) {
        long long fib0 = 0,fib1 =1;//lepsze nazwy potrzebne
        long long fibn;
        for (int i = 1; i < fib_num; i++) {//w sumie mozna by napisac petla =fib_num -2 while(petla--)
            //obliczamy nastepn� liczbe fib po f1
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
int ile=0;
unsigned long long matrix[2][2]{1,1,1,0};
unsigned long long temp[2][2]{1,1,1,0};
unsigned long long jeden[2][2]{1,1,1,0};
void powmatrixmod(int n){
    if(n>=1){



        powmatrixmod(n/2);
        cerr<<endl<<n<<endl;
        for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<temp[i][j]<<" ";
        }
        }
        ile*=2;
        long a=temp[0][0],b=temp[1][0],c=temp[0][1],d=temp[1][1];
        if(n%2==0){



            temp[0][0]=a*a+c*b;
            temp[1][0]=b*a+d*b;
            temp[0][1]=a*c+c*d;
            temp[1][1]=b*c+d*d;
        }
        if(n%2==1){
            ile++;

            //long a=temp[0][0],b=temp[1][0],c=temp[0][1],d=temp[1][1];
            //long ma=matrix[0][0],mb=matrix[1][0],mc=matrix[0][1],md=matrix[1][1];
            long ja=jeden[0][0],jb=jeden[1][0],jc=jeden[0][1],jd=jeden[1][1];
            temp[0][0]=a*ja+b*jc;
            temp[1][0]=c*ja+d*jc;
            temp[0][1]=a*jc+c*jd;
            temp[1][1]=b*jc+d*jd;



            /*

            matrix[0][0]=ma* ja + mb *jc;
            matrix[1][0]=mc* ja + md *jc;
            matrix[0][1]=ma* jb + mb *jd;
            matrix[1][1]=mc* jb + md *jd;
            /*
             matrix[0][0]=ma* a + mb *c;
            matrix[1][0]=mc* a + md *c;
            matrix[0][1]=ma* b + mb *d;
            matrix[1][1]=mc* b + md *d;

            */


        }
    }
}
            /*


            */
const long long mod=1000000007;
int main()
{
    int tests,n;
    long long numb;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<matrix[i][j];
        }
    }
    cin>>n;
    if(n==0){
        cout<<0<<endl;return 0;
    }
    else{
        powmatrixmod(n);
        //res= ()//t[0]+t[2])+t[1]+t[3])) % m;
    }


    cerr<<endl<<n<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<temp[i][j]<<" ";
        }
    }
    cout<<endl;
    /*
        for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<matrix[i][j]<<" ";
        }
    }
    */
    cout<<endl<<endl;
    cout<<temp[1][0];
    cout<<endl<<endl;
    cout<<"ile "<<ile;
    cout<<endl<<endl;
    cout<<fibonaci_iteratively(n);
    return 0;
}
