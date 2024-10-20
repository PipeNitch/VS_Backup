#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n,ca=0,cb=0;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>b[i])ca+=2;
        else if(a[i]<b[i])cb+=2;
        else{
            ca++;
            cb++;
        }
    }

    cout<< ( ca>cb ? "Senior High wins" : ca<cb ? "Junior High wins" : "Draw" );
    cout<<endl<<(ca>cb?ca:cb>ca?cb:ca)<<" "<<(ca<cb?ca:cb<ca?cb:cb);

    return 0;
}