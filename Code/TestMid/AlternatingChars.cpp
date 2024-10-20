#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j>=n-1&&i%2==0)cout<<"* ";
            else if(i+j>=n-1)cout<<"# ";
            else cout<<" ";
            // cout<<j<<","<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}