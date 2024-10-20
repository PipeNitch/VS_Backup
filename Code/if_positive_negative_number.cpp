#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;
    if(n>0)cout<<"POSITIVE NUMBER";
    else if(n<0)cout<<"NEGATIVE NUMBER";
    else cout<<"ZERO NUMBER";

    return 0;
}