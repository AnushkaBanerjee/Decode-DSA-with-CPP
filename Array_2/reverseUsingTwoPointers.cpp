#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int> &a){
    for(int i= 0; i < a.size();i++){
        cout<<a[i]<<" ";
    }
}
// void reversePart(int i ,int j,vector<int>&v){
//     while(i<j){
//         int temp = v[i];
//         v[i] = v[j];
//         v[j]=temp;
//         i++;
//         j--;
//     }
// }

int main(){
 vector<int> v1;
 int n;
 cout<<"Enter size of array: ";
 cin>>n;


//taking  array elements as input
 cout<<"Enter elements of the array:"<<endl;
 for(int i=0;i < n;i++){
    int x;
    cin>>x;
    v1.push_back(x);

 }

 display(v1);
 cout<<endl;

 //reversePart of Array
//  int i,j;
//  cout<<"Enter the indexes of the part of array of to be swaped:";
//  cin>>i>>j;

// reversePart(i,j,v1);



// reverse
// int i=0,j = v1.size()-1;


//  while(i < j){
//     //swap
//     int temp = v1[i];
//     v1[i] = v1[j];
//     v1[j]=temp;
//     i++;
//     j--;
//  }


/*TODO:*/
// for(int i = 0,j = v1.size()-1;i < j;i++,j--){
//     int temp = v1[i];
//     v1[i]=v1[j];
//     v1[j]=temp;
// }


reverse(v1.begin(),v1.end());//built-in function
 display(v1);
return 0;
}