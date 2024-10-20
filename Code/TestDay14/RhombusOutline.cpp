#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;n--;
    for(int i=-n;i<=n;i++){
        for (int j=-n;j<=n;j++){
            // cout<<j<<','<<i<<" ";
            if(abs(i)+abs(j)==n)cout<<"*";
            else cout<<" ";
        }
        cout<<'\n';
    }

    return 0;
}