#include<bits/stdc++.h>
using namespace std;
#define coutf(n,m) cout<<fixed<<setprecision(n)<<m
#define forr(i,a,n) for(int i=a;i<n;i++)
#define forl(i,a,n) for(int i=a;i>n;i--)
#define windows ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endll '\n'
#define sp ' '
typedef long long ll;

bitset<100000001> isPrime;

int main(){windows;
    for(ll i=3;i<1e8;i+=2)if(!isPrime[i])for(ll j=i*i;j<1e8;j+=i)isPrime[j]=1;
    int a,b,c1=0,c2=0,c3=0;cin>>a>>b;
    for(int i=a+!(a&1);i<=b;i+=2)if(!isPrime[i]){
        if(i-2>=3&&!isPrime[i-2]||i+2<1e8&&!isPrime[i+2])++c1;
        if(i-4>=3&&!isPrime[i-4]||i+2<1e8&&!isPrime[i+4])++c2;
        if(i-6>=3&&!isPrime[i-6]||i+2<1e8&&!isPrime[i+6])++c3;
    }
    cout<<c1<<endll<<c2<<endll<<c3;

    return 0;
}