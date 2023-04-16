#include<iostream>
using namespace std;
int main(){
int n;
cout<<"No of rows:";
cin>>n;

for(int i=1;i <= n;i++) {
    for(int j = 1;j <= n;j++){//note both the lines have same i as iterator but they are different for each for loop
        cout<<"*";
    }
    cout<<endl;
    
}



return 0;
}