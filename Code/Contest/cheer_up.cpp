#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

bitset<int(2e6)> a;

int main(){windows;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int k;cin>>k;
        if(k==2||k==3){
            cout<<"YES\n";
            continue;
        }

        int mul=1;
        for(int i=1;i<=k/2;i++){
            if(k%i==0)mul*=i;
        }
        cout<<(mul<k?"YES\n":"NO\n");
    }

    return 0;
}