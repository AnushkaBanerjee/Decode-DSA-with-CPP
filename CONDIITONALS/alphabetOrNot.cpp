#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a character:"<<endl;
    char ch;
    cin>>ch;

    //a to z -> 97 to 122
    //A to Z -> 65 to 90
    
    //here we can also typecast as:
    //int ascii = (int)ch; --> Then code will cahnge as
    
     //if((ascii >= 97 &&  ascii <= 122 )||(ascii >= 65 && ascii<= 90)) {
    //     cout<<"Character is an alphabet!!";

    // }
    
    // else{
    //     cout<<"The character is not an alphabet!!";
    // }

    if((ch >= 97 &&  ch <= 122 )||(ch >= 65 && ch <=90)) {
        cout<<"Character is an alphabet!!";

    }
    
    else{
        cout<<"The character is not an alphabet!!";
    }

}