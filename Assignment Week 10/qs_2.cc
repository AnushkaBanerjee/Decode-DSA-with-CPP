// Given a sorted binary array, efficiently count the total number of 1’s in it.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int a[] = {0,0,0,0,1,1};
int n = 6;

int count = 0;
for(int i = 0;i < n;i++){
    if(a[i]!=1){
        count++;
    }
    else break;
}

cout<<(n-count);
return 0;
}