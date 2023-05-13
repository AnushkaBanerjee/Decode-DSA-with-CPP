




// * * * *   * * * *
// * * *       * * *
// * *           * *
// *               *
// *               *
// * *           * *
// * * *       * * *
// * * * *   * * * *
// * * * * * * * * *

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n:";
cin>>n;

//upper half
for(int i = 1;i < n;i++){
    for(int j = 1;j <=n-i;j++){
        cout<<"*";
    }
    int m = 2*i-1;
    for(int k = 1;k <= m;k++){
        cout<<" ";
    }
    for(int j = 1;j <=n-i;j++){
        cout<<"*";
    }
    cout<<endl;
}



//middle
cout<<"*";
for(int i = 2;i < 2*n-1;i++){
    cout<<" ";
}
cout<<"*";
cout<<endl;




//lower half
for(int i = 1;i < n;i++){
    for(int j = 1;j <= i;j++){
        cout<<"*";
    }
    int m = 2*(n-i)-1;
    for(int k = 1;k <= m;k++){
        cout<<" ";
    }
    for(int j = 1;j <= i;j++){
        cout<<"*";
    }
    cout<<endl;
}

return 0;
}