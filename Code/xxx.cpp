#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;
    cin>>n;

    n=n-1;

    for(int i=-n;i<=n;i++){
        for(int j=-n;j<=n;j++){
            cout<<"("<<j<<", "<<i<<") ";
            // if(abs(j))
        }
        cout<<endl;
    }

    return 0;
}