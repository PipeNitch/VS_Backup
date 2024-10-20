#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<j%10;
    //         // cout<<"("<<j<<", "<<i<<") ";
    //     }
    //     cout<<endl;
    // }


    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            // cout<<j%10;
            if(j!=i)cout<<"a";
            else cout<<n-i+1;
            // cout<<"("<<j<<", "<<i<<") ";
        }
        cout<<endl;
    }

    return 0;
}