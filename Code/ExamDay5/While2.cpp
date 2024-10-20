#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    double n,sum=0,c=0;cin>>n;
    while(n!=0){
        sum+=n;
        cin>>n;
        c++;
    }

    cout<<fixed<<setprecision(2)<<sum/c;

    return 0;
}