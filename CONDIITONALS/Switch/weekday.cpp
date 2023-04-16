/*switch(integer expression){
    case constant 1;
        do this;
    case constant 2;
        do this;
    case constant 3;
        do this;
    default:
        do this;
}*/
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter day number :";
    cin>>x;
    switch(x){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wed";
            break;
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;
        default:
            cout<<"Invalid";
        
    }
return 0;
}
