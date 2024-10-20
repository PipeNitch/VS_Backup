#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n,c=0;cin>>n;
    if(n>=1){
        c+=35;
        n--;
    }
    while(n){
        c+=5;
        n--;
    }
    cout<<c;

    return 0;
}