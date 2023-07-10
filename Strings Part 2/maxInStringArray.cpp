// Given n string consisting of digits from
// 0 to 9. Return the index of string which has
// maximum value. (Take 0 based indexing)
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
string array[] = {"0123","0023","456","00182","940","002901"};
int max = stoi(array[0]);
string maxS = array[0];
for(int i = 1;i<=5;i++){
    int x = stoi(array[i]);
    if(x > max) {
        max = x;
        maxS = array[i];


    }
}
cout<<maxS;
return 0;
}