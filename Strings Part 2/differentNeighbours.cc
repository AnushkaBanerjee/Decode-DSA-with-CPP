//Input a string and return the number of times the neighbouring characters are different from each other.
#include<iostream>
using namespace std;
int main(){
string s;
cin>>s;
int count = 0;
int len = s.length();
for(int i= 0;i < len;i++){
    if(len == 1) break;
    if(i == 0){
        if(s[i]!=s[i+1]) count++;
    }
    else if(i == len-1){
        if(s[i]!=s[i-1]) count++;
    }
    else if(s[i]!=s[i+1]&&s[i]!=s[i-1])count++;

}
cout<<count;
return 0;
}
// output:
// abc
// 3