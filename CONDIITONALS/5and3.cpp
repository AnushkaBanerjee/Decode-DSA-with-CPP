#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n%5 == 0 && n%3 == 0){
        cout<<"The number satisfies the condition of divisibility";
    }
    else{
        cout<<"The number is not divisible by 3 and 5 ";
    }
    // if(n%5 == 0 || n%3 == 0){
        //any one of the conditions is true
    //     cout<<"The number satisfies the condition of divisibility";
    // }
    // else{
    //     cout<<"The number is not divisible by 3 and 5 ";
    // }
}
//&&
/*if(cond1 && cond2){
    //code
}*/
//NOTE: if cond 1 is false then compiler won't check for cond2 


//||
/*if(cond1 || cond2 ){
    //code
}
*/
//NOTE:if cond 1 is true compiler won't check for cond2