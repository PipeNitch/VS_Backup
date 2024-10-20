#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;
    int a[n];
    while(n--)cin>>a[n];
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)cout<<a[i]<<" ";

    return 0;
}   