#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;

const int N=1e6;
bitset<int(1e6+10)> a;

int main(){windows;
    long long n,k,c=0,sum=0;
    cin>>n>>k;

    for(long long i=3;i<=N;i+=2)if(!a[i])for(long long j=i*i;j<=N;j+=(i*2))a[j]=1;
    for(int i=n;i<=N;i++){
        if((!(i%2) && i!=2)||i<=1)continue;
        if(!a[i]){
            c++;
            sum+=i;
            // cout<<i<<" ";
        }
        if(c==k)break;
    }
    cout<<endl<<sum;


    return 0;
}