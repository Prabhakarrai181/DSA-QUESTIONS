#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n==0) return 0;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    
    
    for(int i=0;i<arr.size();i++){
        int sum=0;
        for(int j=i+1;j<n;j++){
            sum=arr[i]+arr[j];
            if(sum==target){
                cout<<"("<<arr[i]<<","<<arr[j]<<")";
            }
        }
    }     
    
}