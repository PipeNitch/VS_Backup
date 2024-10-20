#include <bits/stdc++.h>
#define forr(i,a,n) for(int i=a;i<n;i++)
#define windows ios::sync_with_stdio(0);cin.tie(0)
#define endll "\n"
#define sp " "
typedef long long ll;
using namespace std;
int main(){windows;
    int n,m,a,b;
    cin>>n>>m;
    int A[n][n];
    memset(A,0,sizeof(A));
    forr(i,0,m){
        cin>>a>>b;
        A[a][b]=1;
    }
    cout<<'[';
    forr(i,0,n){
        if(i!=0)cout<<sp;
        cout<<"[ ";
        forr(j,0,n){
            if(i==j||A[i][j])cout<<1<<sp;
            else cout<<0<<sp;
        }
        cout<<']';
        if(i!=n-1)cout<<endll;
    }
    cout<<']';

    return 0;
 }