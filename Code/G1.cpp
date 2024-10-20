#include<bits/stdc++.h>
using namespace std;
#define forr(i,a,n) for(int i=a;i<n;i++)
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    set<int> x;
    int t;cin>>t;
    forr(i,0,t){
        int e;cin>>e;
        forr(i,0,e){
            int l;cin>>l;
            x.insert(l);
            cin>>l;
            x.insert(l);
        }
        cout<<x.size()<<'\n';
    }

    return 0;
}