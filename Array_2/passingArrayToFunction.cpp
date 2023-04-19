//Pass array to function
#include<iostream>
using namespace std;

void display(int *a,int size){//int a[]
    for(int i = 0;i < size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


void change(int b[],int size){//int *b
    b[0] = 100;
}


int main(){
int arr [] = {1,4,2,7,5};

int size = sizeof(arr)/sizeof(arr[0]);


/*TODO:
-> accessing the elements of array
-> updation, pass by value / reference */

    display(arr,size);
    change(arr,size);
    display(arr,size);
    for(int i = 0;i < 5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
//output -> 1 4 2 7 5 
//100 4 2 7 5 
//100 4 2 7 5
return 0;
}