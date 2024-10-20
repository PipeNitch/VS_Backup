#include<bits/stdc++.h>
using namespace std;
#define forr(i,a,n) for(int i=a;i<n;i++)
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endll '\n'
typedef long long ll;

int main(){windows;
    int t;cin>>t;
    double hee[t];
    forr(i,0,t)cin>>hee[i];
    forr(i,0,t){
        if(hee[i]==floor(hee[i]))cout<<"OK"<<endll;else cout<<"NOT INTEGER"<<endll;
    }

    return 0;
}