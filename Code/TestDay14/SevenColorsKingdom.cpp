#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;

int main(){windows;
    long long n;cin>>n;
    string bi="";
    while(n){
        bi=char((n%7)+'0')+bi;
        n/=7;
    }
    if(bi=="")bi+='0';
    cout<<bi;

    return 0;
}