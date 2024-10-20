#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    int m,n,mxat=0,mx=0,sum;cin>>m>>n;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        sum=0;
        for(int j=0;j<n;j++){
            sum+=a[j][i];
            // cout<<a[j][i]<<" ";
        }
        // cout<<sum<<"    "<<endl;
        if(sum>mx){
            mx=sum;
            mxat=i+1;
        }
    }
    cout<<mxat<<endl<<mx;

    return 0;
}