#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    string n;cin>>n;
    int sum=0;
    // 123456789012
    for(int i=0;i<12;i++){
        sum+=(n[i]-'0')*(13-i);
        // cout<<n[i]<<" "<<(n[i]-'0')*(13-i)<<endl;
        // cout<<sum<<endl;
    }
    sum=(11-(sum%11))%10;
    cout<<sum;

    return 0;
}