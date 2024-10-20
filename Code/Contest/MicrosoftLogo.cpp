#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)if(j==0||j==n-1||j==n/2||i==0||i==n-1||i==n/2)cout<<"*";else cout<<"_";
            // cout<<j<<","<<i<<" ";
        cout<<"\n";
    }

    return 0;
}