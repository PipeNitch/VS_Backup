// The_One_Above_All

#include <iostream>
#include <cmath>
#include <vector>
#include <bitset>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;

const int N=1e6;
bitset<int(1e6+10)> a;

// void sieve(){
//     a.flip();
//     a[0]=a[1]=0;
//     for(int i=2;i*i<=1000000;i++)
//         if(a[i])
//             for(int j=i*2;j<=1000000;j+=i)
//                 a[j]=0;
// }

// bool isPrime(int n){
//     if(!a[2])sieve();
//     return a[n];
// }


ll mod_pow(ll base,ll exp,ll mod){
    ll result=1;
    while(exp>0){
        if(exp%2==1)
            result=(result*base)%mod;
        base=(base*base)%mod;
        exp/=2;
    }
    return result;
}


int main(){windows;
    ll n,sum=0,k;
    cin>>n>>k;
    vector<int> m;

    const int L=1e9+7;

    for(int i=0;i<n;i++){
        int x;cin>>x;
        m.push_back(x);
    }

    for(int i=0;i<n;i++){
        if(isPrime(m[i])){
            sum+=m[i];
        }
    }

    // k = fmod(pow(k, sum), L);
    ll result=mod_pow(k,sum,L);
    // for(int i=0;i<sum;i++){
    //     result=(result*k)%L;
    // }
    cout<<result;
    // cout<<k;

    return 0;
}