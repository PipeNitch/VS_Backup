#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// #define forr(i,a,n) for(int i=a;i<n;i++)
// #define forl(i,a,n) for(int i=a;i>n;i--)
// #define endll '\n'
// #define sp ' '
// typedef long long ll;

int main(){windows;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j||i+j==n-1)cout<<"*";else cout<<" ";
            // cout<<j<<","<<i<<" ";
        }
        cout << "\n";
    }

    return 0;
}