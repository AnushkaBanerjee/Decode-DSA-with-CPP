#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
     for(int i = 2;i <= x;i++){
            f*=i;
        }
        return f;
}


int combination(int n,int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
}

int main(){
int n,r;
cout<<"Enter n:";
cin>>n;
cout<<"Enter r:";
cin>>r;
// int nfact = 1;//n!
// for(int i = 2;i <= n;i++){
//     nfact*=i;
// }
// cout<<nfact<<endl;

// int rfact = 1;//r!
// for(int i = 2;i <= r;i++){
//     rfact*=i;
// }
// cout<<rfact<<endl;

// int nrfact = 1;//(n-r)!
// for(int i = 2;i <= n-r;i++){
//     nrfact*=i;
// }
// cout<<nrfact<<endl;
int nfact = fact(n);
int rfact = fact(r);
int nrfact = fact(n-r);


int ncr = combination(n,r);
cout<<ncr;

return 0;
}