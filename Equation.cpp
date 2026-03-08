#include<iostream>
using namespace std;

int equation(int a, int b){
    int ans=(a*a*a)+(a*a*b)+(2*a*a*b)+(2*a*b*b)+(a*b*b)+(b*b*b);

    cout<<ans;
}
int main(){
    int a, b;
    cin>>a>>b;

    equation(a,b);
}