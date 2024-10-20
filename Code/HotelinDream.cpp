#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    long long n,c=0;cin>>n;
    while(n>=15){
        n-=15;
        c+=3000;
    }
    while(n>=5){
        n-=5;
        c+=1500;
    }
    while(n>=2){
        n-=2;
        c+=800;
    }
    while(n>=1){
        n-=1;
        c+=500;
    }
    cout<<c;
}