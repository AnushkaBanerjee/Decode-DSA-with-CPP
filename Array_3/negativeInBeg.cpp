#include<iostream>
#include<vector>
using namespace std;

void sortNandP(vector<int>&arr){
    int i=0,j=arr.size()-1;
    int temp;
    while(i<j){
        if(arr[i]<0)i++;


        if(arr[j]>0)j--;
        
        else if(arr[i]>0 && arr[j]<0){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
       
}
 
}


}

int main(){
 vector<int>v;
 v.push_back(1);
 v.push_back(-2);
 v.push_back(3);
 v.push_back(-4);
 v.push_back(-5);
 v.push_back(6);
 v.push_back(8);
 //print the array
for(int i= 0;i < v.size();i++){
    cout<<v[i]<<" ";
}

//sort array->move negative numbers to the beginning and positive to the end
sortNandP(v);
cout<<endl;
for(int i= 0;i < v.size();i++){
    cout<<v[i]<<" ";
}
return 0;
}