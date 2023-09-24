#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> v;
        bool flag = false;
        for(int i = 0;i < n-1;i++){
            for(int j = i+1;j < n;j++){
                if(arr[i]==arr[j]){
                     v.push_back(arr[i]);
                     flag = true;
                     break;
                     
                }
            }
        }

        if(flag == false){
         v.push_back(-1);
         return v;
        } 
        else{
            sort(v.begin(),v.end());
            return v;
        }
    }

int main(){
int a[]={2,3,1,2,3};
int n = 5;
vector<int> list;

list = duplicates(a,n);
for(int i = 0; i < list.size();i++){
    cout<<list[i]<<" ";
}
return 0;
}