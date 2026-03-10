#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;

    vector<int>nums1(m+n);
    vector<int>nums2(n);

    for(int i=0;i<nums1.size();i++){
        cin>>nums1[i];
    }
    for(int i=0;i<nums2.size();i++){
        cin>>nums2[i];
    }
    
    int i=m-1;
    int j=n-1;

    int k=n+m-1;

    while(j>=0){

       if(i>=0 && nums1[i] > nums2[j]){

            nums1[k]=nums1[i];
            k--;
            i--;


        }else{
            nums1[k]=nums2[j];
            k--;
            j--;
        }
    }

    for(int i=0;i<nums1.size();i++){
        cout<<nums1[i]<<" ";
    }

    
}