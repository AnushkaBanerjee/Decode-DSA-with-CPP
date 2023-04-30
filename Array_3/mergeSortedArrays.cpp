#include<iostream>
#include<vector>
using namespace std;
//merge sorted array
vector<int> mergeSortedArray(vector<int>&arr1,vector<int>&arr2){
    int m = arr1.size();
    int n = arr2.size();
    vector<int>res(m+n);
    
    int i=0,j=0,k=0;
    while(i<=m-1 && j <=n-1){
        
            if(arr1[i]<arr2[j]){
                res[k] = arr1[i];
                i++;
                
            }
            else if(arr1[i]>arr2[j]){
                res[k]=arr2[j];
                j++;
                
            }
            k++;//redundancy
        }

        //for remaining elements
        // if(i == m){//arr1 is completed
        while(j<=n-1){
            res[k]=arr2[j];
            j++;
            k++;
        }
            
        //}

        //if(j == n){
            while(i <= m-1){
                res[k]=arr1[i];
                i++;
                k++;
            }
        //}
        return res;
    }


    




int main(){
int n,m;
//first sorted array
vector<int>v1;
v1.push_back(1);
v1.push_back(4);
v1.push_back(5);
v1.push_back(8);
n=v1.size();
for(int i=0;i < n;i++){
    cout<<v1[i]<<" ";
}

cout<<endl;

//second sorted array
vector<int>v2;
v2.push_back(2);
v2.push_back(3);
v2.push_back(6);
v2.push_back(7);
v2.push_back(10);
v2.push_back(12);
m=v2.size();
for(int i=0;i < m;i++){
    cout<<v2[i]<<" ";
}

cout<<endl;
//calling merge function
vector<int>v3=mergeSortedArray(v1,v2);
for(int i=0;i < v3.size();i++){
    cout<<v3[i]<<" ";
}
return 0;
}