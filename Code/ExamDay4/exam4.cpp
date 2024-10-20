#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n,m;cin>>n>>m;
    if(n-m>0)
        cout<<n<<" is bigger than "<<m;
    else if(n-m<0)
        cout<<n<<" is smaller than "<<m;
    else
        cout<<n<<" is equal to "<<m;
    

    return 0;
}