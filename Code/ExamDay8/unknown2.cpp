#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int m,n;cin>>m>>n;
    int a[m][n],b[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>b[i][j];
    //     }
    // }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            // cout<<a[i][j]+b[i][j]<<" ";
            sum+=a[j][i];
        }
        cout<<sum<<endl;
    }

    return 0;
}