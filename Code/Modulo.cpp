#include<bits/stdc++.h>
using namespace std;
#define forr(i,a,n) for(int i=a;i<n;i++)
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

main(){windows;
    set<int> x;
    forr(i,0,10){
        int a;cin>>a;
        x.insert(a%42);
    }
    cout<<x.size();

    return 0;
}