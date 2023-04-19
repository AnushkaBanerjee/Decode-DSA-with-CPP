//Pass array to function
#include<iostream>
using namespace std;

void display(int a[]){
    int size = sizeof(a)/sizeof(a[0]);//this will calculate the size of the pointer not array itself
    for(int i = 0;i < size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


void change(int b[]){
    b[0] = 100;
}


int main(){
int arr [] = {1,4,2,7,5};

//int size = sizeof(arr)/sizeof(arr[0]);


/*TODO:
-> accessing the elements of array
-> updation, pass by value / reference */

    display(arr);
    change(arr);
    display(arr);
    for(int i = 0;i < 5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
/*FIXME:
OUPUT->warning: 'sizeof' on array function parameter 'a' will return size of 'int*' [-Wsizeof-array-argument]
     int size = sizeof(a)/sizeof(a[0]);*/
return 0;
}