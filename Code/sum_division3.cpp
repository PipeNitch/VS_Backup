#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n,sum=0;cin>>n;
    for(int i=0;i<=n;i++){
        if(i%3==0)sum+=i;
    }
    cout<<sum;

    return 0;
}