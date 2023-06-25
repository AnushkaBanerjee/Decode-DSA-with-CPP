//Input a string of size n and update all the even positions in the string to character 'a'.Consider 0-based indexing
#include<iostream>
using namespace std;
int main(){
//FIXME: This format is not valid
// char s;

// for(char i = 0;s[i]!='\0';i++){
//     cin>>s[i];
// }
string s;
getline(cin,s);
int count = 0;
for(int i = 0 ;s[i]!='\0';i++){
    
    if(i % 2 == 0) s[i]='a';
}
cout<<s;
return 0;
}