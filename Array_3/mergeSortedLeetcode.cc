#include<iostream>
#include<vector>
using namespace std;


//display function
void display(vector<int>&nums1,int size){
    for(int i = 0;i < (nums1.size()+size);i++){
        cout<<nums1[i]<<" ";
    }
}
//merge sorted array
void mergeSortedArray(vector<int>&nums1,int m,vector<int>&nums2,int n){
    int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--; k--;
            }
            else{
                nums1[k] = nums2[j];
                j--; k--;
            }
        }
        while(j>=0){
            nums1[k] = nums2[j];
            j--; k--;
        }
        display(nums1,nums2.size());
        cout<<endl;
}

int main(){
int n,m;
cout<<"Enter the value of n and m:";
cin>>n>>m;
//first sorted array
vector<int>v1;
// v1.push_back(1);
// v1.push_back(4);
// v1.push_back(5);
// v1.push_back(8);

for(int i=0;i < n;i++){
    int x;
    cin>>x;
    v1.push_back(x);
}


cout<<endl;

//second sorted array
vector<int>v2;
// v2.push_back(2);
// v2.push_back(3);
// v2.push_back(6);
// v2.push_back(7);
// v2.push_back(10);
// v2.push_back(12);

for(int i=0;i < m;i++){
    int p;
    cin>>p;
    v2.push_back(p);
}


cout<<endl;
//calling merge function
mergeSortedArray(v1,v1.size(),v2,v2.size());



return 0;
}