#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n,q;cin>>n>>q;
    int a[n],b[q],mx[n];
    // vector<int> mx(q);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<q;i++)cin>>b[i];

    for(int i=n-2;i>=0;i--)mx[i]=max(mx[i+1],a[i]);

    for(int i=0;i<q;i++)cout<<mx[b[i]-1]<<"\n";

    return 0;
}