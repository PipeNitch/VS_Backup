#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;

ll modpow(ll base,ll exp,ll mod){
    ll result=1;
    while(exp>0){
        if(exp%2==1)
            result=(result*base)%mod;
        base=(base*base)%mod;
        exp/=2;
    }
    return result;
}

int main(){windows;
    int n;cin>>n;
    long long a,b,m;
    while(n--){
        cin>>a>>b>>m;
        cout<<modpow(a,b,m)<<endl;
        // cout<<a;
    }

    return 0;
}