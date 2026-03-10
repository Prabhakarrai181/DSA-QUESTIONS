#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //using sorting
    // sort(arr.begin(),arr.end());
    
    // for(int i=1;i<n;i++){
    //    if(arr[i-1]==arr[i]){
    //     cout<<arr[i];
    //     break;
    //    }

    // }
    // return 0;


    // using set

    set<int>st;
    for(int i : arr){
        if(st.count(i)){

            cout<<i;
            break;
            
        }else{
            st.insert(i);
        }
    }
}