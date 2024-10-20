#include<bits/stdc++.h>
using namespace std;

int cal(int n){
    int sum=0,binsum=0;
    cout<<binsum;
    for(int i=0;i<n-1;i++){
        binsum+=2;
        cout<<"+"<<binsum;
        sum+=binsum;
    }
    return sum;
}

int main(){
    cout<<"Enter n=";
    int n;cin>>n;
    int x = cal(n);
    cout<<" = "<<x;

    return 0;
}