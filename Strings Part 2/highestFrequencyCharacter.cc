// Given a string consisting of lowercase English alphabets. Print the character that is occurring most number of times.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
string s ;
cin>>s;

//FIXME: The below process has a high time complexity and is not very efficient
//
// int max = 0;
// for(int i = 0;i < s.length();i++){
//     char ch = s[i];
//     int count = 1;
//     for(int j = i+1;j < s.length();j++){
//         if(s[j]==s[i]) count++;
//     }
//     if(max < count) max = count;
// }


// for(int i = 0;i < s.length();i++){
//     char ch = s[i];
//     int count = 1;
//     for(int j = i+1;j < s.length();j++){
//         if(s[j]==s[i]) count++;
//     }
//     if(count == max) cout<<ch<<" "<<max<<endl;
// }


//TODO: Instead use the below method 
// -> Use an integer array of size 26 here (Special array)
// ->Uses extra space (26 size). This is use of constant space
// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 
// 0 0 0 0 0 0 0 0 0 0 0   0  0  0 0   0  0 0   0  0  0  0  0  0  0  0
// a b c d e f g h i j k   l  m  n  o  p  q  r  s  t  u  v  w  x  y  z

vector<int> arr(26,0);
for(int i = 0 ;i < s.length();i++){
    char ch = s[i];
    int ascii = (int)ch;
    arr[ascii-97]++;
}
int max = 0;

for(int i = 0;i < 26;i++){
    if(arr[i]>max) max = arr[i];
}

for(int i = 0;i < 26;i++){
    if(arr[i]==max){
        int ascii = i+97;
        char ch = (char)ascii;
        cout<<ch<<" "<<max<<endl;
        }
}
return 0;
}
//Ouput 1:
// h 2
// s 2
// a 2
// l 2

// Ouput 2:
// leetcode
// e 3