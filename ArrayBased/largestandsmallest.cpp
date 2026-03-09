#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);

    for(int i=0;i<nums.size();i++){
        cin>>nums[i];
    }
       if(n < 2){
        cout<<"Second Smallest : -1"<<endl;
        cout<<"Second Largest : -1"<<endl;
        return 0;
    }

    int maxEle=-1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>maxEle){
            maxEle=nums[i];
        }
    }
    int minEle=maxEle;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<minEle){
            minEle=nums[i];
        }
    }
    int secMax=-1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>secMax && nums[i]<maxEle){
            secMax=nums[i];
        }
    }
    cout<<"second largest element is : "<<secMax<<endl;
    int secMin=secMax;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<secMin && nums[i]>minEle){
            secMin=nums[i];
        }
    }
    cout<<"second smallest element is : "<<secMin;





}