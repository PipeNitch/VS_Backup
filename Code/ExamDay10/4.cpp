#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int cal(int n){
    int c=0;
    if(n<=300)c+=9*n;
    else if(n<=600){
        n-=300;
        c+=2700+8*n;
    }
    else if(n<=1000){
        n-=600;
        c+=5100+6*n;
    }else{
        n-=1000;
        c+=7100+5*n;
    }

    return c;
}

int main(){
    int mem,watt;
    cout<<"Customer number : ";
    cin>>mem;
    cout<<"Watt used : ";
    cin>>watt;
    cout<<"Electric value = "<<cal(watt);

    return 0;
}