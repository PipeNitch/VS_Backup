#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endll '\n'
typedef long long ll;

int a,b,m,cnt=0;
ll poww(int a,int k){
    if(k==0)return 1;
    ll x=poww(a,k/2)%m;
    if(k%2==0)return x%m*x%m;
    return (x%m*x%m*a)%m;
}

int main(){windows;
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b>>m;
        cout<<poww(a,b)%m<<endll;
    }

    return 0;
}