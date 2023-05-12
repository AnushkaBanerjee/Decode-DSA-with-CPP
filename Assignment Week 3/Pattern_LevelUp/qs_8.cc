//Star diamond
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    //upper triangle
for(int i = 1;i < n;i++){
    cout<<" ";
}
cout<<"*";
cout<<endl;
for(int i = 2;i <=n-1;i++){
    for(int j = 1;j <=n-i;j++){
        cout<<" ";
    }
    cout<<"* ";
    for(int k = 1;k <= 2*(i-1)-1;k++){
        cout<<" ";
    }
    cout<<"* ";
    cout <<endl;
}

//lower triangle
for(int i = 1;i <= n-1;i++){
    for(int j = 1;j <= i;j++){
        cout<<" ";
    }
    cout<<"* ";
    int m = 2*(n-i-1);
    for(int k = 1;k <= m ;k++){
        cout<<" ";
    }
    cout<<"*"<<endl;
    
}
for(int i = 1;i <= n;i++){
    cout<<" ";
}
cout<<"*";
return 0;
}