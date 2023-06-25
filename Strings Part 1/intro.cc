#include<iostream>
using namespace std;
int main(){
char str[]={'a','b','c','d','e'};
// char str[]="abcde";
// char str[5]="abcde";//This line has an extra character in the last position of the string "\0"-> this is a special character
//FIXME:
// error: initializer-string for array of chars is too long [-fpermissive]
//  char str[5]="abcde";
//              ^~~~~~~
//NOTE: 
// "\" is not a character; This is a special character that has to be followed either by "\n","\t","\0"
//FIXME: char str[]={a,b,c,d,e};This is taken as a string of undeclared variables
//TODO:
//  for(int i = 0;/*i < 5*/str[i]!='\0';i++){
//     cout<<str[i]<<endl;
// }
cout<<str<<endl;//This is not possible in arrays; it rather prints the address of the array
char ch ='\0';
cout<<(int)ch;
return 0;
}