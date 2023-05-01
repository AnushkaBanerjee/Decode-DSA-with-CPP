#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextPermutation(vector<int>&nums){
 int n = nums.size();
        //1)finding pivot index
        int idx = -1;
        for(int i = n-2;i >= 0 ;i--){
            if(nums[i]<nums[i+1]){
                idx = i;
                break;
            }
        }
        if(idx == -1){
            reverse(nums.begin(),nums.end());
            return;
        }
        //2)sort/reverse after pivot
        reverse(nums.begin()+(idx+1),nums.end());
        //3)finding just greater element than idx
        int j = -1;
        for(int i = idx+1 ;i<n;i ++){
            if(nums[i]>nums[idx]){
                j = i;
                break;
            }
        }
        //4)Swapping idx and j
        int temp = nums[idx];
        nums[idx]=nums[j];
        nums[j]=temp;
        return;

}



int main(){
 vector<int>arr;
 int n;
 cout<<"Enter the number of elements in the array:";
 cin>>n;
 cout<<"Enterv elements of the array:";
 
 for(int i = 0;i < n;i++){
    int x;
    cin>>x;
    arr.push_back(x);
 }
 cout<<endl;
 nextPermutation(arr);
 for(int i = 0;i < n;i++){
    cout<<arr.at(i)<<" ";
 }

return 0;
}