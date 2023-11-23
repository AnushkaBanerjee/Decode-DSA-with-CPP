#include<iostream>
using namespace std;
int main(){
//armstrong numbers between 1 and 500 --> sum of cube of every digit is = the number
//eg :- 153 = (1*1*1)+(5*5*5)+(3*3*3)

for(int i  = 1;i <= 500; i++){
    int x = 0,temp = i;
    while(temp>0){
        int m = temp%10;
        x += m*m*m;
        temp/=10;
    }

    if(i == x){
        cout<<i<<endl;
    }
}



return 0;
}