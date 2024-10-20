#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;

const int N=1e6;
bitset<int(1e6+10)> a;

int main(){windows;
    int n;
    cin>>n;

    for(long long i=3;i<=N;i+=2)if(!a[i])for(long long j=i*i;j<=N;j+=(i*2))a[j]=1;
    for(int i=0;i<=n;i++){
        if((!(i%2) && i!=2)||i<=1)continue;
        if(!a[i])cout<<i<<' ';
    }

    return 0;
}