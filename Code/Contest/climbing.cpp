#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;
    vector<int> a;
    a.push_back(0);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back(x);
    }
    for(int i=1;i<=n;i++){
        if(a[i]>=a[i-1])cout<<"-1 ";
        else cout<<i-2<<" ";
    }

    return 0;
}