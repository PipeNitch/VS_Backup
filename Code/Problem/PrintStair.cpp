#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i*2-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}