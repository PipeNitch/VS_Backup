#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n,mx=0;
    for(int i=0;i<10;i++){
        cin>>n;
        if(n>mx)mx=n;
    }
    cout<<mx;

    return 0;
}