#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    string bi;
    cin>>bi;
    int de=0;
    for(int i=0;i<bi.length();i++){
        de+=(bi[i]-'0')*pow(2,bi.length()-i-1);
    }
    cout<<de;

    return 0;
}