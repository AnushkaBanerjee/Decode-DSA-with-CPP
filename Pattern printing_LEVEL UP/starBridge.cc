#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter value of n:";
cin>>n;
int m = n-1;//new lines

//nsp is written outside loop to print no of spaces for each row
//int nsp = 1;
//2*n-1 stars
for(int i = 1;i <= 2*n-1;i++){
    cout<<"*";
}
cout<<endl;

for(int i = 1;i <= m;i++){
    for(int j = 1;j <= m+1-i;j++){
        cout<<"*";
    }
    //spaces
    for(int k = 1;k <= 2*i-1/*nsp*/;k++){
        cout<<" ";
    }
    //nsp+=2;
    for(int j = 1;j <= m+1-i;j++){
        cout<<"*";
    }
    cout<<endl;
}
  
return 0;
}