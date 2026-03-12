#include<bits/stdc++.h>
using namespace std;

int main(){

    string s="UDDDUDUU";
    
    int l=0;
    int v=0;
    
    for(char ch : s){
        if(ch=='U'){
           l++;
           if(l==0){
            v++;
           }
            
        }else{
            l--;
        }
        

    }
    cout<<v;
}
