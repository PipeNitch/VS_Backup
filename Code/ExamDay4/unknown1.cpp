#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;
    if(n>=80)cout<<'A';
    else if(n>=40)cout<<'P';
    else cout<<'F';

    return 0;
}