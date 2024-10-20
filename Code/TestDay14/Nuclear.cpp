#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    unsigned long long a,b;cin>>a>>b;
    int ba=a;
    for(int i=1;i<b;i++)a*=ba;
    cout<<a;

    return 0;
}