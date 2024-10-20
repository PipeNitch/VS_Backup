#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n,c=0;cin>>n;
    while(n){
        if(n%2!=0)c++;
        n/=2;
    }
    cout<<c;

    return 0;
}