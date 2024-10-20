#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;

int main(){windows;
    ll x,y;
    cin>>x>>y;
    ll z = (x-1) + (x&x|y);
    cout<<z;

    return 0;
}