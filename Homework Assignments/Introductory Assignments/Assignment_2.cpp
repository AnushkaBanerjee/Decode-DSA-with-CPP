#include<iostream>
using namespace std;
int main(){
//This is in Indian currency 
int n2,n5,n10,n20,n50,n100,n200,n500,n2000;
n2=n5=n10=n20=n50=n100=n200=n500=n2000=0;//ctrl+d-->for multicursor

int amount;
cout<<"Enter the amount: "<<endl;
cin>>amount;

switch(amount>=2000){
    case 1:
        n2000=amount/2000;
        amount=amount%2000;
}
switch(amount>=500){
    case 1:
        n500=amount/500;
        amount=amount%500;
}


switch(amount>=200){
    case 1:
        n200=amount/200;
        amount=amount%200;
}

switch(amount>=100){
    case 1:
        n100=amount/100;
        amount=amount%100;
}
switch(amount>=50){
    case 1:
        n50=amount/50;
        amount=amount%50;
}
switch(amount>=20){
    case 1:
        n20=amount/20;
        amount=amount%20;
}
switch(amount>=10){
    case 1:
        n10=amount/10;
        amount=amount%10;
}
switch(amount>=5){
    case 1:
        n5=amount/5;
        amount=amount%5;
}
switch(amount>=2){
    case 1:
        n2=amount/2;
        amount=amount%2;
}
cout<<"Number of 2000 rupee notes :"<<n2000<<endl;
cout<<"Number of 500 rupee notes :"<<n500<<endl;
cout<<"Number of 200 rupee notes :"<<n200<<endl;
cout<<"Number of 100 rupee notes :"<<n100<<endl;
cout<<"Number of 50 rupee notes :"<<n50<<endl;
cout<<"Number of 20 rupee notes :"<<n20<<endl;
cout<<"Number of 10 rupee notes :"<<n10<<endl;
cout<<"Number of 5 rupee notes :"<<n5<<endl;
cout<<"Number of 2 rupee notes :"<<n2<<endl;



return 0;
}