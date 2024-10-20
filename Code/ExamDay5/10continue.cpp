#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n,c=0;cin>>n;
    for(int i=1;i<=n;i++){
        c++;
        cout<<i<<" ";
        if(c==10){
            cout<<"\n";
            c=0;
        }
    }

    return 0;
}