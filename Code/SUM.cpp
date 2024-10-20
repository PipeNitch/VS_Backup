#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n,sum=0;cin>>n;
    int k;
    while(n--){
        cin>>k;
        sum+=k;
    }
    cout<<sum;

    return 0;
}