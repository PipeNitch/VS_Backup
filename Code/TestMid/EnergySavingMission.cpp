#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fpre(n) fixed<<setprecision(n)
typedef long long ll;

int main(){windows;
    float n;cin>>n;
    if(n<=50)cout<<fpre(2)<<n*2;
    else cout<<fpre(2)<<n*3.5;

    return 0;
}