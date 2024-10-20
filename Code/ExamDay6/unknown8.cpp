#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=n;j>=1;j--){
            cout<<i;
        }
        cout<<endl;
    }

    return 0;
}