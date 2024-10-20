#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;

int main(){windows;
    string n,m;cin>>n>>m;
    long long n1=0,m1=0;
    for(long long i=0;i<n.length();i++){
        n1+=(n[i]-'0')*pow(4,n.length()-i-1);
    }
    // cout<<n1<<" ";
    for(long long i=0;i<m.length();i++){
        m1+=(m[i]-'0')*pow(4,m.length()-i-1);
    }
    // cout<<m1<<" ";
    cout<<n1%m1;

    return 0;
}