#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;

    n-=1;

    for(int i=-n;i<=n;i++){
        for(int j=1;j<=n+1;j++){
            if(abs(i)+abs(j)<=n+1)cout<<j;
        }
        cout<<endl;
    }

    return 0;
}