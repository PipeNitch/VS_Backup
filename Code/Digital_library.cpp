#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define forr(i,a,n) for(int i=a;i<n;i++)

int main(){windows;
    int n;cin>>n;
    vector<int> x;
    forr(i,0,n){
        int k;cin>>k;
        x.push_back(k);
    }
    int c;cin>>c;
    bool ih=0;
    forr(i,0,n){
        if(x[i]==c){
            cout<<i+1<<' ';
            ih=1;
        }
    }
    if(!ih)cout<<0;

    return 0;
}