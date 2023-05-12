// Input: n = 4
// Output:

// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1



#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter no of rows:";
cin>>n;
int m = n-1;
int a = n-1;
for(int i = 1;i <= 2*n-1;i++){
    
    if(i <= n) cout<<i;

    else{
        cout<<a;
        a--;
    }
    
}
cout<<endl;
for(int i = 1;i <= m;i++){
    
    for(int j = 1;j <= m+1-i;j++){
        cout<<j;
        
    }
    for(int k = 1;k <= 2*i-1;k++){
        cout<<" ";
        
    }
    for(int j =  m+1-i;j>=1;j--){
        cout<<j;
    }
    cout<<endl;

}
return 0;
}