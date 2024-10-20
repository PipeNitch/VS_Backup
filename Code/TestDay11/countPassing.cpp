#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n,m,k,c=0;cin>>n>>m>>k;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            // cout<<a[j][i]<<" ";
            sum+=a[j][i];
        }
        if(sum>=k)c++;
    }
    cout<<c;

    return 0;
}