#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n:";
cin>>n;
// 1 1 1 1
// 1 2 2 2
// 1 2 3 3
// 1 2 3 4

for(int i = 1; i <= 2*n-1;i++){
    for(int j = 1;j <=2*n-1;j++){
        int a = i;
        int b = j ;
        if(a>n) a = 2*n-i;
        if(b>n) b = 2*n-j;
        int x = min(a,b);
        cout<<n-x+1;//built in function

    }
    cout<<endl;
}


return 0;
}