#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n,mx=0,c;cin>>n;
    do{
        // cout<<n<<" ";
        c++;
        mx=max(mx,n);
        if(n%2==0)n=sqrt(n);
        else n=sqrt(n*n*n);
    }while(n!=1);
    c++;

    cout<<mx<<" "<<c;

    return 0;
}