#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter value of n:";
cin>>n;
int m = n-1;//new lines

//nsp is written outside loop to print no of spaces for each row
//int nsp = 1;
//2*n-1 numbers
for(int i = 1;i <= 2*n-1;i++){
    cout<<i;
}
cout<<endl;

for(int i = 1;i <= m;i++){
    int a = 1;
    for(int j = 1;j <= m+1-i;j++){
        cout<<a;
        a++;
    }
    //spaces
    for(int k = 1;k <= 2*i-1/*nsp*/;k++){
        cout<<" ";
        a++;
    }
    //nsp+=2;
    for(int j = 1;j <= m+1-i;j++){
        cout<<a;
        a++;

    }
    cout<<endl;
}
  
return 0;
}