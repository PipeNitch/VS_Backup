#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        if(i%4!=0)cout<<i;
    }

    return 0;
}