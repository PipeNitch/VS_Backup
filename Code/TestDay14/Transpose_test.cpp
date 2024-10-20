#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    int m,n;cin>>m>>n;
    int a[n][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}