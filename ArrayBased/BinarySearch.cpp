#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr,int target){
    int start=0;
    int end=arr.size()-1;

    while(start<=end){
        int mid=start+(end-start)/2;

        if(arr[mid]==target){
            
            return mid;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;

    cout<<binarySearch(arr,target);

}