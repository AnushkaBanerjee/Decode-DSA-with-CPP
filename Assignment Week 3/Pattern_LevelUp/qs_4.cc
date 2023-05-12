// Input: n = 4
// Output:

// A B C D E F G
// A B C   E F G
// A B       F G
// A           G



#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter no of rows:";
cin>>n;
int m = n-1;
for(int i = 1;i <= 2*n-1;i++){
    cout<<(char)(i+64);
}
cout<<endl;
for(int i = 1;i <= m;i++){
    char a = 'A';
    for(int j = 1;j <= m+1-i;j++){
        cout<<a;
        a++;
    }
    for(int k = 1;k <= 2*i-1;k++){
        cout<<" ";
        a++;
    }
    for(int j = 1;j <= m+1-i;j++){
        cout<<a;
        a++;
    }
    cout<<endl;

}
return 0;
}