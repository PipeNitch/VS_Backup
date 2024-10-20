#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;
    for(int i=n;i>0;i--){
        if(i%3==0)continue;
        else cout<<i<<" ";
    }

    return 0;
}