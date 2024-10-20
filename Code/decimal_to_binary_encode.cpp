#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    short n,c=0;cin>>n;
    string bi="";
    while(n){
        if(n%2!=0)c++;
        bi=to_string(n%2)+bi;
        n/=2;
    }
    if(bi.empty())bi+='0';
    cout<<(c%2==0?bi+'1':bi+'0');

    return 0;
}