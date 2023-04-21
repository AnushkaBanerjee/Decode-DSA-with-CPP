//Pass array to function
#include<iostream>
using namespace std;

void display(int *a,int size){//int a[]
    
    cout<<"Passed array by reference "<<a<<endl;
    cout<<"Passed array by reference with & "<<&a<<endl;//->This is the address of the pointer itself
    
    
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

cout<<"This is the address of main array "<<arr<<endl;
cout<<"This is the address of array with ampersand "<<&arr<<endl;





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