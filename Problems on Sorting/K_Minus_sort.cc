#include<iostream>
#include<climits>
using namespace std;

float max(float a,float b){
    if(a>=b) return a;
    else return b;
}
float min(float a,float b){
    if(a<b) return a;
    else return b;
}

int main(){
int arr[]={5,3,10,3};
int n = 4;
for(int i = 0;i < n;i++){
    cout<<arr[i]<<" ";
}

cout<<endl;


float kMin = (float)INT_MIN;
float kMax =(float)INT_MAX;
bool flag = true;
for(int i = 0;i < n-1;i++){
if(arr[i]>=arr[i+1]){//kMin
    kMin = max(kMin,(arr[i]+arr[i+1])/2.0);
}
else{
    //kMax
    kMax = min(kMax,(arr[i]+arr[i+1])/2.0);
}

if(kMin > kMax){
    flag = false;
    break;
}
}
if(flag==false) cout<<(-1);
else if(kMin==kMax){
    if(kMin-(int)kMin==0){
        //kMin and kMax are integers
        cout<<"There is only one value of k:"<<kMin;
    }
    else cout<< -1;
}
else{
    if(kMin-(int)kMin>0){
        kMin = (int)kMin + 1;
    }
    cout<<"Range of k is: ["<<kMin<<","<<(int)kMax<<"]";
}
}