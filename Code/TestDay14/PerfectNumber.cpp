#include<bits/stdc++.h>
#define ull unsigned long long
#define windows ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main(){windows;
    int t; cin>>t;
    while(t--){
        ull n,sum=1; cin>>n;
        if(n==1) {
            cout<<"Not Perfect\n";
            continue;
        }
        for(ull i=2;i*i<=n;i++){
            if(n%i==0) sum+=i+(n/i);
            if(i*i==n) sum-=i;
        }
        if(sum==n) cout<<"Perfect\n";
        else cout<<"Not Perfect\n";
    }
    return 0;
}