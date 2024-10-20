#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
#define forr(i,a,n) for(int i=a;i<n;i++)
#define forl(i,a,n) for(int i=a;i>n;i--)

int main(){windows;
    vector<int> x;
    forr(i,0,10){
        int k;cin>>k;x.push_back(k);
    }
    int c,p;cin>>c>>p;
    forl(i,9,p-1)x[i+1]=x[i];
    x[p]=c;
    forr(i,0,10)cout<<x[i]<<" ";

    return 0;
}
