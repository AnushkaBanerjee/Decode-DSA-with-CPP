#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int> &a){
    for(int i= 0; i < a.size();i++){
        cout<<a[i]<<" ";
    }
}
void reversePart(int i ,int j,vector<int>&v){
    while(i<j){
        int temp = v[i];
        v[i] = v[j];
        v[j]=temp;
        i++;
        j--;
    }
}

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

//enter the number of rotations
int k;
cout<<"Enter the number of rotations:";
cin>>k;
//if k >= n -> this will give index out of bound for the below code
if(k > n) k %=n;
 //reversePart of Array
 
reversePart(0,n-k-1,v1);
reversePart(n-k,n-1,v1);
reversePart(0,n-1,v1);
cout<<endl;

 display(v1);
return 0;
}