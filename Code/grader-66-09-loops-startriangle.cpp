#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0)cout<<"+";
            else cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}