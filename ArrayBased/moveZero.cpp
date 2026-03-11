#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0;
    int k=n-1;

    while(i<=k){
        if(arr[i]==0){
           swap(arr[k],arr[i]);
            k--;
            // i++;
        }else{
            i++;
        }     
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    


}