#include<iostream>
using namespace std;
int main(){
//TODO: <string_name>.size()
// string str = "My Mother is the best!!";
// cout<<str.size();//str.length()->{synonyms}

// TODO: <string_name>.push_back('<character>')
// string str = "abcd";
// cout<<str<<endl;
// str.push_back('e');
// str.push_back('f');
// str.push_back('g');
// cout<<str<<endl;
// str.push_back(char) -> we cannot push_back a string

//TODO: <string_name>.pop_back()
// string str = "anushka";
// cout<<str<<endl;
// str.pop_back();
// cout<<str;

//'+' operator
//Ususally used to append values to a string
 string s = "abc";
 cout<<s ;
 string t = "efg";
 s = s+t;//or we can also write as s  = abc + t -> abcefg
 //or s = s + "xyz" -> abcxyz
 //or s = s + "a" -> abca
 cout<<s;
return 0;
}