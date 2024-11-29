#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define forr(i,a,n) for(int i=a;i<n;i++)
#define endll '\n'
#define sp ' '

int main(){windows;
    int m,n;cin>>m>>n;
    int a[m][n];
    forr(i,0,m){
        forr(j,0,n){
            cin>>a[i][j];
        }
    }
    forr(i,0,m){
        forr(j,0,n){
            int x;
            cin>>x;
            cout<<a[i][j]+x<<sp;
        }
        cout<<endll;
    }

    return 0;
}