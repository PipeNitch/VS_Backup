#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    string n;cin>>n;
    for(int i=1;i<n.size();i++){
        if(i%2==1)swap(n[i-1],n[i]);
    }
    cout<<n;

    return 0;
}