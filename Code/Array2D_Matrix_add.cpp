#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    int m,n;cin>>m>>n;
    int A[m][n],B[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>B[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<A[i][j]+B[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<A[i][j]-B[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}