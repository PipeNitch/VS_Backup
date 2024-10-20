#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n,mx=INT_MIN,mn=INT_MAX;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mx=max(mx,x);
        mn=min(mn,x);
    }
    cout<<mx*2+mn;

    return 0;
}