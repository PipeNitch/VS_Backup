#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define forr(i,a,n) for(int i=a;i<n;i++)

int main(){
    int m,n;cin>>m>>n;
    int A[m][n];
    forr(i,0,m){
        forr(j,0,n){
            cin>>A[i][j];
        }
    }

    forr(i,0,m){
        forr(j,0,n){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n";

    forr(i,0,n){
        forr(j,0,m){
            cout<<A[j][i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}